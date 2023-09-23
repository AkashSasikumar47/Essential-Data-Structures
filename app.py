from flask import Flask, render_template

app = Flask(__name__)

# Sample menu data (replace with your restaurant's menu)
menu_items = [
    {"name": "Dish 1", "description": "Description 1", "price": "$10"},
    {"name": "Dish 2", "description": "Description 2", "price": "$15"},
    # Add more menu items here
]


@app.route("/")
def index():
    return render_template("index.html")


@app.route("/menu")
def menu():
    return render_template("menu.html", menu_items=menu_items)


@app.route("/reservation")
def reservation():
    return render_template("reservation.html")


if __name__ == "__main__":
    app.run(debug=True)
