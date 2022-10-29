from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")


@app.route("/register")
def greet():
    # Validate submission
    if request.form.get("name") == "" or request.form.get("sport") not in ["Basketball", "Soccer", "Ultimate Frisbee"]:
        return render_template("failure.html")

    return render_template("success.html")

