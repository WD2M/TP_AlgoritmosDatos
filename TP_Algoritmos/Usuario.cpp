#include "Usuario.h"
#include <iostream>

void Usuario::CrearUsuarios(int cantidad)
{
    int Datousuario = 1;
    cout << "Ingrese los datps para el Usuario:" + Datousuario;
        string codUsuario;
        cout << "Ingrese un codigo de Usuario:";
        cin >> codUsuario;

        string nombre;
        cout << "Ingrese un nombre:";
        cin >> nombre;

        string apellido;
        cout << "Ingrese un apellido:";
        cin >> apellido;

        string datosPersonales;
        cout << "Ingrese un dato Personal:";
        cin >> datosPersonales;

        string correo;
        cout << "Ingrese un correo:";
        cin >> correo;
        usuario(codUsuario, nombre, apellido, datosPersonales, correo);

        cantidad--;
        if (cantidad > 0) {
            CrearUsuarios(cantidad);
        }
}

void Usuario::usuario(string codUsuario, string nombre, string apellido, string datosPersonales, string correo)
{
    cout << "Usuario registrado con datos: "+ codUsuario + " " + nombre + " " + apellido + " " + datosPersonales + " " + correo +"\n";
}

string Usuario::RegistroContenido(string nombre)
{
    return " con contenido: " + nombre;
}



void Usuario::EnviarCorreo()
{
    auto EnvioCorreo = [&](string correo, string contenido) {
       return Correo(correo) + RegistroContenido(contenido);
    };
    string correo;
    cout << "Ingrese un correo:";
    cin >> correo;
    string contenido;
    cout << "Ingrese el contenido:";
    cin >> contenido;
    cout << EnvioCorreo(correo, contenido);
}

string Usuario::Correo(string nombre)
{
    return "El correo fue enviado a: " + nombre;
}
