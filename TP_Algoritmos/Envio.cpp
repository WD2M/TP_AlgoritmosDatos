#include "Envio.h"
#include <stdlib.h>
#include <functional>
void Envio::Enviar(string Ubicacion, char EstadoEnvio, int Codigo, string FechaEnvio)
{
	this->Ubicacion = Ubicacion;
	this->EstadoEnvio = EstadoEnvio;
	this->Codigo = Codigo;
	this->FechaEnvio = FechaEnvio;
}

void Envio::IndicarEnviar(string Ubicacion, int Codigo, string FechaEnvio)
{
	int  mes = 0;
	int a= 1+ rand()%  (30  -1+1);
	int b=1 + rand() % (30 - 1+1);
	int c=1 + rand() % (30 - 1+1);
	cout << "-----------------------" << endl;
	cout << ":REALIZACION DE PEDIDO:" << endl;
	cout << "-----------------------" << endl;

	cout << "Indique la direccion que desea ser enviado el pedido:"; cin >> Ubicacion;
	cout << "El codigo que se le asignara sera:";

	cout << "Opcion 1:" << endl;
	cout << mes <<"/"<<a<<"/24";
	cout << "Opcion 2:" << endl;
	cout << mes <<"/" << b<< "/24";
	cout << "Opcion 3:" << endl;
	cout << mes<< "/"<< c <<"/24";

	cout << "Ingrese el mes que desee el envio:";
	cin >> mes;
	cout << "los siguientes dias posibles para el envio son los siguientes:";




}

void Envio::EstadodelEnvio(char EstadoEnvio)
{

if(1<1){}
}

void Envio::redirigirEnvio(string Ubicacion, int Codigo)
{
	cout << "La anterior direccion del envio era: " + this->Ubicacion;
	cout << "El anterior codigo fue: " + this->Codigo;
	cout << "La nueva direccion del envio e: " + Ubicacion;
	cout << "El nuevo codigo de envio es:" + Codigo;


}

