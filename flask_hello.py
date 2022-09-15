from flask import Flask, url_for
from markupsafe import escape

app = Flask(__name__)

@app.route('/')
def hello_world():
    return '<p>Flask HaGa !</p>'

@app.route('/<nama>')
def hello(nama):
    return f'Hello, {escape(nama)} !'

with app.test_request_context():
    print(url_for('hello_world'))
