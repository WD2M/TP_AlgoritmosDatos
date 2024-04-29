#include "GestorUsuarios.h"
#include "CarritoCompras.h"
#include <iostream>

Usuario GestorUsuarios::CrearUsuarios(int posUsuario)
{
    Usuario usuario;
    cout << "Ingrese los datos para el Usuario " + to_string(posUsuario) + " :" << endl;

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

void GestorUsuarios::CrearUsuariosDistribuidor(int cantidad, int inicial)
{
    Usuario usua = CrearUsuarios(inicial);

    string ubicacion;
    cout << "Ingrese los Datos de Ubicacion:";
    cin >> ubicacion;

    string contacto;
    cout << "Ingrese un Datos de Contacto:";
    cin >> contacto;
    usuarioDistribuidor(usua, ubicacion, contacto);

    cantidad--;
    inicial++;
    if (cantidad > 0) {
        CrearUsuariosDistribuidor(cantidad, inicial);
    }
}

void GestorUsuarios::CrearUsuariosVendedor(int cantidad, int inicial)
{
    Usuario usua = CrearUsuarios(inicial);

    float ventas;
    cout << "Ingrese los Datos de ventas:";
    cin >> ventas;

    string empresa;
    cout << "Ingrese un Datos de empresas:";
    cin >> empresa;
    usuarioVendedor(usua, ventas, empresa);

    cantidad--;
    inicial++;
    if (cantidad > 0) {
        CrearUsuariosVendedor(cantidad, inicial);
    }
}

void GestorUsuarios::CrearUsuariosCliente(int cantidad, int inicial)
{
    Usuario usua = CrearUsuarios(inicial);

    float saldo;
    cout << "Ingrese los Datos del saldo:";
    cin >> saldo;

    string tarjeta;
    cout << "Ingrese un Datos de la tarjeta:";
    cin >> tarjeta;
    usuarioCliente(usua, saldo, tarjeta);

    cantidad--;
    inicial++;
    if (cantidad > 0) {
        CrearUsuariosCliente(cantidad, inicial);
    }
}

void GestorUsuarios::usuarioDistribuidor(Usuario usua, string ubicacion, string contacto)
{
    cout << "--------------------------------------------------" << endl;
    cout << "Usuario Distribuidor registrado con datos: \n" + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.datosPersonales + " " + usua.correo + " " + ubicacion + " " + contacto + "\n";
    cout << "--------------------------------------------------" << endl;
}

void GestorUsuarios::usuarioVendedor(Usuario usua, float ventas, string empresa)
{
    cout << "--------------------------------------------------" << endl;
    cout << "Usuario Vendedor registrado con datos: \n" + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.datosPersonales + " " + usua.correo + " " + to_string(ventas) + " " + empresa + "\n";
    cout << "--------------------------------------------------" << endl;
}

void GestorUsuarios::usuarioCliente(Usuario usua, float saldo, string tarjeta)
{
    cout << "--------------------------------------------------" << endl;
    cout << "Usuario Cliente registrado con datos: \n" + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.datosPersonales + " " + usua.correo + " " + to_string(saldo) + " " + tarjeta + "\n";
    cout << "--------------------------------------------------" << endl;
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
