#pragma once
#include <string>
using namespace std;

class Usuario
{
private:
	int codUsuario;
	string nombre;
	string apellido;
	string datosPersonales;
	string correo;
public:
	void CrearUsuarios(int cantidad);
	void usuario(string codUsuario, string nombre,	string apellido, string datosPersonales, string correo);
	string RegistroContenido(string nombre);
	void EnviarCorreo();
	string Correo(string nombre);	
};

