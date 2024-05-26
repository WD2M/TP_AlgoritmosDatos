#include "Envio.h"
#include <stdlib.h>
#include <functional>
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

	cout << "Ingrese el mes que desee el envio:";
	cin >> mes;
	cout << "los siguientes dias posibles para el envio son los siguientes:";
	cout << endl<<"Opcion 1:" << endl;
	cout << mes << "/" << a << "/24";
	cout << endl << "Opcion 2:" << endl;
	cout << mes << "/" << b << "/24";
	cout << endl << "Opcion 3:" << endl;
	cout << mes << "/" << c << "/24";
	cout << endl << "INGRESE LA OPCION A ELEGIR" << endl;
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


	cout << "-----------------------" << endl;
	cout << ":REALIZACION DE PEDIDO:" << endl;
	cout << "-----------------------" << endl;
	Enviar("", ' ', 0, "");
	cout << "El codigo que se le asignara sera: "<<Codigo<<endl;
	//orden inserccion x hacer
	cout << " El envio quedo programado para la siguiente fecha: " << this->FechaEnvio;
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

