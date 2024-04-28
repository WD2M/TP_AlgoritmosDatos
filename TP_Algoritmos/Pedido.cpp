#include "Pedido.h"

void Pedido::DetallesEnvio()
{

	cout << "--------------------" << endl;
	cout << "|DETALLES DEL ENVIO|" << endl;
	cout << "--------------------" << endl;
	cout << endl<<"EL TOTAL GASTADO ES: " << this->Total;
	cout << endl<<"EL METODO DE PAGO QUE SE USO ES: " << this->MetodoPago;
	cout << endl<<"El TIPO DE MONEDA QUE SE USO ESO ES: " << this->TipoMoneda;
	cout << endl<<"EL TOTAL GASTADO ES: " << this->Total;

}

void Pedido::RealizarNuevoPedido()
{
	string NuevoPedido;
	cout << "EN CASO DESEE REALIZAR NUEVO PEDIDO ESCRIBA SI:";
	cin >> NuevoPedido;
	if (NuevoPedido = 'SI')
	{
		RealizarCompra;
	}
	else
	{
		return 0;
	}
}
