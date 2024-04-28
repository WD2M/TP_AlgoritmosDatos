#include "Comprar.h"


Comprar::Comprar(string TipoMoneda, string MetodoPago, float Total)
{
	this->TipoMoneda = TipoMoneda;
	this->MetodoPago = MetodoPago;
	this->Total = Total;


}

string Comprar::RealizarCompra(string TipoMoneda, string MetodoPago)
{
	cout << "-----------------------" << endl;
	cout << ":REALIZACION DE COMPRA:" << endl;
	cout << "-----------------------" << endl;
	cout <<endl<< "1.- ELIGE EL TIPO DE MONEDA PARA PAGAR:";
	cin >> TipoMoneda;
	cout << endl << "2.-INGRESE EL METODO DE PAGO:";
	cin >> MetodoPago;

	return " La realizacion de la compra se hizo con la moneda "+TipoMoneda + " con el metodo de pago "+ MetodoPago;
}



string Comprar::CalcularPago(float Total)
{
	if (Total <=  0) {
		return 0;
	}
	if else(Total<2)
	{
		 Total+=0.5;
		 CalcularPago(Total);
		 return "El valor de la compra es de: " + Total;
	}
}

void  Comprar::MostrarCompra()
{
	auto UnionEventos = [&](float total, string TipoMoneda, string MetodoPago) {
	return CalcularPago(Total) + RealizarCompra(TipoMoneda,MetodoPago);
};
	float Total;
	cout << "El total del pago es:";
	cin >>Total;
	string TipoMoneda,MetodoPago;
	cout << "El tipo de pago es:";
	cin >>MetodoPago;
	cout << "El tipo de moneda es:";
	cin >>TipoMoneda;
	cout << UnionEventos(Total, TipoMoneda, MetodoPago);


}

void Comprar::Aumentarprenda()
{
	
}

void Comprar::EliminarPrenda()
{

}
