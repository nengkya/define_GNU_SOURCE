from flask import Flask, url_for, render_template, request
from markupsafe import escape

app = Flask(__name__)

@app.route('/')
def hello_world():
    return '<p>Flask HaGa !</p>'

@app.route('/<nama>')
def hello_name(nama):
    return f'Hello, {escape(nama)} !'

with app.test_request_context():
    print(url_for('hello_world'))

@app.route('/hello')
@app.route('/hello/<name>')
def hello(name = None):
    return render_template('hello.html', name = name)

@app.route('/login', methods = ['GET', 'POST'])
def login():
    if request.method == 'POST':
        return do_the_login()
    else:
        return show_the_login_form()
