#include "Envio.h"
#include <stdlib.h>
#include <functional>

#define AQUA "\033[38;2;0;184;169m"
#define BLANK "\033[38;2;248;243;212m"
void Envio::Enviar(string Ubicacion, char EstadoEnvio, int Codigo, string FechaEnvio)
{
	int opcion=0;
	int  mes = 0;
	int a = 1 + rand() % ((30 - 1) + 1);
	int b = 2 + rand() % ((30 - 2) + 1);
	int c = 3 + rand() % ((30 - 3) + 1);
	this->Ubicacion = Ubicacion;
	this->EstadoEnvio = EstadoEnvio;
	this->Codigo = Codigo;

	cout << "Ingrese el mes que desee el envio (1-12): ";
	cin >> mes;
	cout << "los siguientes dias posibles para el envio son los siguientes:";
	cout << endl<< AQUA << "Opcion 1:" << endl;
	cout << BLANK << mes << "/" << a << "/24";
	cout << endl << AQUA << "Opcion 2:" << endl;
	cout << BLANK << mes << "/" << b << "/24";
	cout << endl << AQUA << "Opcion 3:" << endl;
	cout << BLANK << mes << "/" << c << "/24";
	cout << endl << AQUA << "INGRESE LA OPCION A ELEGIR: " << BLANK <<endl;
	cin >> opcion;
	if(opcion==1)
	{ 
    this->FechaEnvio = to_string(mes) +"/" + to_string(a) + "/24";
	}
	else if (opcion == 2)
	{
	this->FechaEnvio = to_string(mes) + "/" + to_string(b)+ "/24";
	}
	else if (opcion==3)
	{
	this->FechaEnvio = to_string(mes) + "/" + to_string(c) + "/24";
	}
}

void Envio::IndicarEnviar(string Ubicacion, int Codigo, string FechaEnvio)
{

	cout << AQUA;
	cout << "***************************" << endl;
	cout << "->" << BLANK << "REALIZACION DE PEDIDO" << AQUA << "<-" << endl;
	cout << "***************************" << endl;
	cout << BLANK;
	Enviar("", ' ', 0, "");
	cout << AQUA << "El codigo que se le asignara sera: "<< BLANK << Codigo<<endl;
	//orden inserccion x hacer
	cout << AQUA << "El envio quedo programado para la siguiente fecha: " << BLANK << this->FechaEnvio;
	cout << endl;
	/*redirigirEnvio(Ubicacion, Codigo);*/

}

void Envio::EstadodelEnvio(char EstadoEnvio)
{

if(1<1){}
}

void Envio::redirigirEnvio(string Ubicacion, int Codigo)
{
	cout << endl<<"La anterior direccion del envio era: " + this->Ubicacion<<endl;
	cout << endl << "El anterior codigo fue: " + this->Codigo << endl;
	cout << endl << "La nueva direccion del envio e: " + Ubicacion << endl;
	cout << endl << "El nuevo codigo de envio es:" + Codigo << endl;


}

