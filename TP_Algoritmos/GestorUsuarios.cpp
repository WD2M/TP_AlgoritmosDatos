#include "GestorUsuarios.h"
#include "CarritoCompras.h"
#include <iostream>


#define BLUE "\033[34m"
#define BLANK "\033[38;2;248;243;212m"
#define SKYBLUE "\033[36m"
#define BRIGHT_SKYBLUE "\033[1;36m"

Usuario GestorUsuarios::CrearUsuarios(int posUsuario)
{
    Usuario usuario;
    cout << SKYBLUE << "<-" << BLANK << " INGRESE DATOS PARA EL USUARIO " << posUsuario << SKYBLUE << ": " << "->" << endl;

    cout << SKYBLUE << "*" << BLANK << " INGRESE UN CODIGO DE USUARIO: ";
    cin >> usuario.codUsuario;

    cout << SKYBLUE << "*" << BLANK << " INGRESE UN NOMBRE: ";
    cin >> usuario.nombre;

    cout << SKYBLUE << "*" << BLANK << " INGRESE UN APELLIDO: ";
    cin >> usuario.apellido;

    cout << SKYBLUE << "*" << BLANK << " INGRESE UBICACION: ";
    cin >> usuario.Ubicacion_usuario;

    cout << SKYBLUE << "*" << BLANK << " INGRESE UN CORREO: ";
    cin >> usuario.correo;
    return usuario;
}

int GestorUsuarios::CrearUsuariosDistribuidor(int cantidad, int inicial)
{
    Usuario usua = CrearUsuarios(inicial);

    string ubicacion;
    cout << BRIGHT_SKYBLUE << "*" << BLANK << " INGRESE DATOS DE UBICACION: ";
    cin >> ubicacion;

    cout << BRIGHT_SKYBLUE << "*" << BLANK << " INGRESE NUMERO DE CONTACTO: ";
    cin >> usua.contacto;
    G->adicionarVertice(usua.codUsuario); //indice=0
    int ranArco= 18 + rand() % 38 - 18 + 1;
    G->adicionarArco(0, ranArco); //indice=0
    usuarioDistribuidor(usua, ubicacion, usua.contacto);
    return usua.codUsuario;
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

int GestorUsuarios::CrearUsuariosCliente(int cantidad, int inicial)
{
    Usuario usua = CrearUsuarios(inicial);

    float saldo;
    cout << SKYBLUE << "*" << BLANK << " INGRESE LOS DATOS DEL SALDO: ";
    cin >> saldo;

    string tarjeta;
    cout << SKYBLUE << "*" << BLANK << " INGRESE LOS DATOS DE LA TARJETA: ";
    cin >> tarjeta;
    usuarioCliente(usua, saldo, tarjeta);

    cantidad--;
    inicial++;
    if (cantidad > 0) {
        CrearUsuariosCliente(cantidad, inicial);
    }
    return saldo;
}

void GestorUsuarios::usuarioDistribuidor(Usuario usua, string ubicacion, int contacto)
{
    cout << endl;
    cout << BRIGHT_SKYBLUE << "**************************************************" << endl;
    cout << BLANK << "Usuario Distribuidor registrado con datos: \n" + to_string(G->obtenerVertice(0)) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.Ubicacion_usuario + " " + usua.correo + " " + ubicacion + " " + to_string(contacto) + "\n";
    cout << BRIGHT_SKYBLUE << "**************************************************" << endl << endl;
}

void GestorUsuarios::usuarioVendedor(Usuario usua, float ventas, string empresa)
{
    cout << "--------------------------------------------------" << endl;
    cout << "Usuario Vendedor registrado con datos: \n" + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.Ubicacion_usuario + " " + usua.correo + " " + to_string(ventas) + " " + empresa + "\n";
    cout << "--------------------------------------------------" << endl;
}

void GestorUsuarios::usuarioCliente(Usuario usua, float saldo, string tarjeta)
{
    cout << endl;
    cout << SKYBLUE << "**************************************************" << endl;
    cliente.ClienteI(saldo, tarjeta, usua.codUsuario, usua.nombre, usua.apellido, usua.Ubicacion_usuario, usua.correo);
    cout << BLANK <<"Usuario Cliente registrado con datos: \n" + to_string(usua.codUsuario) + " " + usua.nombre + " "
        + usua.apellido + " " + usua.Ubicacion_usuario + " " + usua.correo + " " + to_string(saldo) + " " + tarjeta + "\n";
    cout << SKYBLUE << "**************************************************" << endl << endl;
}

string GestorUsuarios::RegistroContenido(string nombre)
{
    return " con contenido: " + nombre;
}

int GestorUsuarios::EnviarCorreo()
{
    auto EnvioCorreo = [&](string correo, string contenido) {
        return Correo(correo) + RegistroContenido(contenido);
        };
    int codigoCorreo;
    cout << BLUE << "- " << BLANK << "Ingrese un codigo de correo" << BLUE ": " << BLANK;
    cin >> codigoCorreo;
    string correo;
    cout << BLUE << "- " << BLANK << "Ingrese un correo" << BLUE ": " << BLANK;
    cin >> correo;
    string contenido;
    cout << BLUE << "- " << BLANK << "Ingrese el contenido" << BLUE ": " << BLANK;
    cin >> contenido;
    cout << EnvioCorreo(correo, contenido) << endl << endl;

    return codigoCorreo;
}

string GestorUsuarios::Correo(string nombre)
{
    return "El correo fue enviado a: " + nombre;
}

int GestorUsuarios::getContacto(int contacto2)
{
    return contacto2;
}

