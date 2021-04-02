from app import app

from flask import render_template

@app.route("/", methods=["GET"])
def index():
    return render_template("index.html")

@app.route("/register", methods = ["GET", "POST"])
def register():
    return render_template("register.html")

@app.route("/signin", methods = ["GET", "POST"])
def signin():
    return render_template("signin.html")