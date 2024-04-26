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
	void usuario(int codUsuario, string nombre,	string apellido,
		string datosPersonales, string correo);


	
};

