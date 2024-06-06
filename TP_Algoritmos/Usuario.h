#pragma once
#include <string>
using namespace std;

class Usuario
{
public:
	int codUsuario;
	string nombre;
	string apellido;
	string Ubicacion_usuario;
	string correo;
	int contacto;
	void GetUsuario();
	string Login(string usuario, string contraseña);
	void CerrarSesion();
	
};

