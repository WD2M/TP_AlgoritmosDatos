#include "CarritoCompras.h"
#include "CatalogoVestimenta.cpp"
#include "HIstorialCompras.h"
#include "GestorUsuarios.h"
#include "Envio.h"
#include "Usuario.h"
#define AQUA "\033[38;2;0;184;169m"
#define BLANK "\033[38;2;248;243;212m"

void Compras::Comprar(string TipoMoneda, string MetodoPago, float Total)
{
	this->TipoMoneda = TipoMoneda;
	this->MetodoPago = MetodoPago;
	this->Total = Total;
}

string Compras::RealizarCompra(string TipoMoneda, string MetodoPago)
{
	cout << endl;
	cout << AQUA << "*************************" << endl;
	cout << AQUA <<"->" << BLANK << "REALIZACION DE COMPRA"<< AQUA << "<-" << endl;
	cout << AQUA << "*************************" << BLANK << endl;


	return " La realizacion de la compra se hizo con la moneda "+TipoMoneda + " con el metodo de pago "+ MetodoPago;
	cout << endl;
}

string Compras::CalcularPago(float Total)
{
	
	if (Total <=  0) {
		return "El valor de la compra es de 0";
	}
	else if(Total<2)
	{
		 Total+=0.5;
		 CalcularPago(Total);
		 return "El valor de la compra es de: " + to_string(Total);
	}
	else {
		return "El valor de la compra es de: " + to_string(Total);
	}
	cout << endl;
}

void  Compras::MostrarCompra(float precio, int codigo)
{
	auto UnionEventos = [&](float total, string TipoMoneda, string MetodoPago) {
		return CalcularPago(total) + RealizarCompra(TipoMoneda, MetodoPago);
		};
	string TipoMoneda, MetodoPago;
	cout << BLANK << "Ingrese Los Datos a comprar: \n";
	cout << "El tipo de pago es: ";
	cin >> MetodoPago;
	cout << "El tipo de moneda es: ";
	cin >> TipoMoneda;
	cout << UnionEventos(precio, TipoMoneda, MetodoPago) << endl;
	Realizar_Envio_Compra.IndicarEnviar(codigousuario.ubiciacion_del_usuario(), codigo, "");
}

void Compras::Aumentarprenda()
{
}

void Compras::EliminarPrenda()
{
}

