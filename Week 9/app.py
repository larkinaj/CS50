from flask import Flask, render_template, request


# app = Flask(__name__)

# @app.route("/")
# def index():
#     name = request.args.get("name")
#     return render_template("index.html", name=name)
########################################################
# app = Flask(__name__)

# @app.route("/")
# def index():
#     return render_template("index.html")


# @app.route("/greet")
# def greet():
#     name = request.args.get("name")
#     return render_template("greet.html", name=name)

#########################################################
# app = Flask(__name__)

# @app.route("/")
# def index():
#     return render_template("index.html")

# @app.route("/greet")
# def greet():
#     this didnt work like it was supposed to
#     name = request.args.get("name", "world")
#     return render_template("greet.html", name=name)


#########################################################
# app = Flask(__name__)

# @app.route("/")
# def index():
#     return render_template("index.html")


# @app.route("/greet")
# def greet():
#     name = request.args.get("name")
#     return render_template("greet.html", name=name)


#########################################################
app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")


@app.route("/greet")
def greet():
    name = request.args.get("name")
    return render_template("greet.html", name=name)