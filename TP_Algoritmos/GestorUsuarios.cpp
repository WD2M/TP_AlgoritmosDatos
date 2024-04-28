#include "GestorUsuarios.h"
#include <iostream>

Usuario GestorUsuarios::CrearUsuarios()
{
    Usuario usuario;
    cout << "Ingrese los datos para el Usuario:\nh";  

    cout << "Ingrese un codigo de Usuario:";
    cin >> usuario.codUsuario;

    cout << "Ingrese un nombre:";
    cin >> usuario.nombre;

    cout << "Ingrese un apellido:";
    cin >> usuario.apellido;

    cout << "Ingrese un dato Personal:";
    cin >> usuario.datosPersonales;

    cout << "Ingrese un correo:";
    cin >> usuario.correo;
    return usuario;
}

void GestorUsuarios::CrearUsuariosDistribuidor(int cantidad)
{
    Usuario usua = CrearUsuarios();

    string ubicacion;
    cout << "Ingrese los Datos de Ubicacion:";
    cin >> ubicacion;

    string contacto;
    cout << "Ingrese un Datos de Contacto:";
    cin >> contacto;
    usuarioDistribuidor(usua, ubicacion, contacto);

    cantidad--;
    if (cantidad > 0) {
        CrearUsuariosDistribuidor(cantidad);
    }
}

void GestorUsuarios::CrearUsuariosVendedor(int cantidad)
{
    Usuario usua = CrearUsuarios();

    float ventas;
    cout << "Ingrese los Datos de ventas:";
    cin >> ventas;

    string empresa;
    cout << "Ingrese un Datos de empresas:";
    cin >> empresa;
    usuarioVendedor(usua, ventas, empresa);

    cantidad--;
    if (cantidad > 0) {
        CrearUsuariosVendedor(cantidad);
    }
}

void GestorUsuarios::CrearUsuariosCliente(int cantidad)
{
    Usuario usua = CrearUsuarios();

    float saldo;
    cout << "Ingrese los Datos de ventas:";
    cin >> saldo;

    string tarjeta;
    cout << "Ingrese un Datos de empresas:";
    cin >> tarjeta;
    usuarioCliente(usua, saldo, tarjeta);

    cantidad--;
    if (cantidad > 0) {
        CrearUsuariosCliente(cantidad);
    }
}

void GestorUsuarios::usuarioDistribuidor(Usuario usua, string ubicacion, string contacto)
{
    cout << "Usuario registrado con datos: " + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.datosPersonales + " " + usua.correo + " " + ubicacion + " " + contacto + "\n";
}

void GestorUsuarios::usuarioVendedor(Usuario usua, float ventas, string empresa)
{
    cout << "Usuario registrado con datos: " + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.datosPersonales + " " + usua.correo + " " + to_string(ventas) + " " + empresa + "\n";
}

void GestorUsuarios::usuarioCliente(Usuario usua, float saldo, string tarjeta)
{
    cout << "Usuario registrado con datos: " + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.datosPersonales + " " + usua.correo + " " + to_string(saldo) + " " + tarjeta + "\n";
}

string GestorUsuarios::RegistroContenido(string nombre)
{
    return " con contenido: " + nombre;
}

void GestorUsuarios::EnviarCorreo()
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

string GestorUsuarios::Correo(string nombre)
{
    return "El correo fue enviado a: " + nombre;
}
