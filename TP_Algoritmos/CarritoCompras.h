#pragma once
class CarritoCompras
{
private:
	int cantidadPrendas;
	int precio;
	
public:
	void agregar(int a);
	int getCodigo(int a);
	void Eliminar();
	void Comprar(float gasto);
	void Historial();
};

