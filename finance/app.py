import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from tempfile import mkdtemp
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd
import datetime

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")

# Make sure API key is set
if not os.environ.get("API_KEY"):
    raise RuntimeError("API_KEY not set")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    userInfo = db.execute("SELECT * FROM users WHERE id = ?", session["user_id"])[0]
    transactionInfo = db.execute("SELECT * FROM transactions WHERE user_id = ?", session["user_id"])

    shares = db.execute("SELECT DISTINCT symbol FROM transactions WHERE user_id = ?", session["user_id"])
    print(test)

    balance = userInfo["cash"]

    homeInfo = []
    # shares = {}



    for transaction in transactionInfo:
        if transaction["price"] not in shares:
            shares[transaction["symbol"]] = 1
            shares["price"] = transaction["price"]
        elif transaction["symbol"] in shares:
            shares[transaction["symbol"]] += 1
            shares["price"] += transaction["price"]
        homeInfo.append(shares)

    shares = {}

    print(homeInfo)
    # total = shares["price"] + balance



    return render_template("index.html", shares=shares)


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method =="POST":
        symbol = request.form.get("symbol")

        if request.form.get("shares").isnumeric() == False:
            return apology("Invalid Share Amount")

        shares = int(request.form.get("shares"))

        # shares = int(request.form.get("shares"))
        symbolInfo = lookup(symbol)

        if not symbol or not shares:
            return apology("No fields can be blank")

        if shares < 0:
            return apology("Invalid Share Amount")

        if symbolInfo == None:
            return apology("Could not find that symbol")

        currentUser = db.execute("SELECT * FROM users WHERE id = ?", session["user_id"])[0]
        cash = currentUser["cash"]

        transactionPrice = shares * symbolInfo["price"]

        if transactionPrice > cash:
            return apology("Not Enough Funds For Purchase")

        newCashAmount = cash - transactionPrice
        db.execute("UPDATE users SET cash = ? WHERE id = ?", newCashAmount, session["user_id"])

        date = datetime.datetime.now()

        db.execute("INSERT INTO transactions (user_id, symbol, shares, price, date) VALUES (?, ?, ?, ?, ?)", session["user_id"], symbolInfo["symbol"], shares, symbolInfo["price"], date)

        flash(str(shares) + " " + symbolInfo["symbol"] + " " + "share(s) purchased for $"+ str(symbolInfo["price"]) +". Your account balance is $" + "{:.2f}".format(newCashAmount))

        # return render_template("bought.html", shares=str(shares), symbol=symbolInfo["symbol"], newCash=newCashAmount, price=symbolInfo["price"])
        return redirect("/")
    return render_template("buy.html")


@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    return apology("TODO")


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method =="POST":
        symbol = request.form.get("symbol")
        symbolInfo = lookup(symbol)
        if symbolInfo == None:
            return apology("Could not find that symbol")
        return render_template("quoted.html", name=symbolInfo["name"], price=symbolInfo["price"], symbol=symbolInfo["symbol"])
    return render_template("quote.html")


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "POST":
        username = request.form.get("username").lower()
        password = request.form.get("password")
        confirm = request.form.get("confirmation")
        userlist = db.execute("SELECT * FROM users")

        if not username or not password or not confirm:
            return apology("No fields can be blank")
        if password != confirm:
            return apology("Passwords do not match")
        for user in userlist:
            if user["username"] == username:
                return apology("Username already exists")

        hashed = generate_password_hash(password, method='pbkdf2:sha256', salt_length=8)

        db.execute("INSERT INTO users (username, hash) VALUES(?, ?)", username, hashed)
        return redirect("/login")

    return render_template("register.html")
    # return apology("TODO")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""
    return apology("TODO")
