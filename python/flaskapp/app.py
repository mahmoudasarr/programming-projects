from flask import Flask, render_template

app = Flask(__name__)
lessons = [{
    "title" : "Request",
    "course" : "Python",
    "author" : "Omar"
},
{
    "title" : "Request-HTML Library Course",
    "course" : "Python",
    "author" : "Ahmed"
},
{
    "title" : "Detetime Module",
    "course" : "Python",
    "author" : "Mohamed"
},
]

@app.route("/")
@app.route("/home")

def home():
    return render_template("home.html", lessons=lessons)

@app.route("/about")
def about():
    return render_template("about.html")

if __name__=="__main__":
    app.run(debug=True)