#include "Comprar.h"

Comprar::Comprar(string TipoMoneda, string MetodoPago, float Total)
{
	this->TipoMoneda = TipoMoneda;
	this->MetodoPago = MetodoPago;
	this->Total = Total;


}

void Comprar::RealizarCompra(string TipoMoneda, string MetodoPago)
{
	cout << "-----------------------" << endl;
	cout << ":REALIZACION DE COMPRA:" << endl;
	cout << "-----------------------" << endl;
	cout <<endl<< "1.- ELIGE EL TIPO DE MONEDA PARA PAGAR:";
	cin >> TipoMoneda;
	cout << endl << "2.-INGRESE EL METODO DE PAGO:";
	cin >> MetodoPago;

}

void Comprar::CalcularPago(float Total)
{
	if (Total = < 0) {
		return 0;
	}
	else
	{
		return CalcularPago;
	}
}

string Comprar::MostrarCompra()
{

	lambdas auto UnionEventos = [&](float total, string TipoMoneda, string MetodoPago) {
	return CalcularPago(Total) + RealizarCompra(TipoMoneda,MetodoPago);
};
	return string();
	float Total;
	cout << "El total del pago es:";
	cin >> this->Total;
	string TipoMoneda,MetodoPago;
	cout << "El tipo de moneda que se uso es:" << cin << this->TipoMoneda << endl; 
	"El metdodo de pago fue el siguiente:" << cin << this->MetodoPago << endl;
	cout << UnionEventos(Total, TipoMoneda,MetodoPago);
}

void Comprar::Aumentarprenda()
{
}

void Comprar::EliminarPrenda()
{
}
