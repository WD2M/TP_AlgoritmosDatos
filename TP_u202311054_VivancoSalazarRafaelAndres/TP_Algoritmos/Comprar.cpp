#include "CarritoCompras.h"
#include "Favoritos.h"
#include "CatalogoVestimenta.cpp"
#include "HIstorialCompras.h"
#include "Temporada.cpp"
#include "Oferta.cpp"
#include "Marca.cpp"
#include "GestorUsuarios.h"
void Compras::Comprar(string TipoMoneda, string MetodoPago, float Total)
{
	this->TipoMoneda = TipoMoneda;
	this->MetodoPago = MetodoPago;
	this->Total = Total;
}

string Compras::RealizarCompra(string TipoMoneda, string MetodoPago)
{
	cout << "-----------------------" << endl;
	cout << "*REALIZACION DE COMPRA*" << endl;
	cout << "-----------------------" << endl;


	return " La realizacion de la compra se hizo con la moneda "+TipoMoneda + " con el metodo de pago "+ MetodoPago;
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
}

void  Compras::MostrarCompra()
{
	auto UnionEventos = [&](float total, string TipoMoneda, string MetodoPago) {
	return CalcularPago(total) + RealizarCompra(TipoMoneda,MetodoPago);
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

void Compras::Aumentarprenda()
{
	int NuevaPrenda;
}

void Compras::EliminarPrenda()
{
	int Prenda;
	cout << "QUE PRENDA DESEA ELIMINAR: ( 1:ad 2:da 3:Dad) ";
	cin >> Prenda;
	switch (Prenda)
	{
	case 1:
	{
		cout << "�Prenda ad Eliminada...";
		break;
	}
	case 2:
	{
		cout << "�Prenda ad Eliminada...";
		break;
	}
	case 3:
	{
		cout << "�Prenda Dad Eliminada...";
		break;
	}

	default:
		break;
	}
}