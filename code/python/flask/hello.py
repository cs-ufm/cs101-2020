from flask import Flask, jsonify, render_template, request

app = Flask(__name__)

mi_variable= 2+3

# * una visita a una base de datos
bebidas_favoritas=[ "coca-cola", "pepsi", "jugo naranja", "cafe", "te frio", "horchata"]

bebidas_favoritas_por_persona={
    "Marcos": ["cafe","coca-cola"],
    "Marcela": ["pepsi", "jugo naranja"],
    "Nickolas": ["te frio", "horchata"]
}



@app.route('/hello')
def hello():
    msg="Hello UFM"
    return render_template("hello.html", greet_msg=msg)


@app.route("/")
def home():
    nombre="Marcos"
    return render_template("index.html", bebidas_persona=bebidas_favoritas_por_persona)

# diferenciar cuando un programa es importado o ejecutado.
if __name__ == "__main__":
    debug=True
    # if environment == "development" or environment == "local":
    #     debug=True
    print("Starting web server")
    app.run(host="0.0.0.0",debug=debug)