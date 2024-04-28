#include "Envio.h"


void Envio::Enviar(string Ubicacion, char EstadoEnvio, int Codigo, string FechaEnvio)
{
	this->Ubicacion = Ubicacion;
	this->EstadoEnvio = EstadoEnvio;
	this->Codigo = Codigo;
	this->FechaEnvio = FechaEnvio;
}

void Envio::IndicarEnviar(string Ubicacion, int Codigo, string FechaEnvio)
{
	cout << "-----------------------" << endl;
	cout << ":REALIZACION DE PEDIDO:" << endl;
	cout << "-----------------------" << endl;

	cout << "Indique la direccion que desea ser enviado el pedido:"; cin >> Ubicacion;
	cout << "El codigo que se le asignara sera:";
	cout << "Diga la fecha que desee que se le entregue:"; cin >> FechaEnvio;
}

void Envio::EstadodelEnvio(char EstadoEnvio)
{

}

void Envio::redirigirEnvio(string Ubicacion, int Codigo)
{
}

