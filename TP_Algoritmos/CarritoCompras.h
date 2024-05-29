#pragma once
class CarritoCompras
{
private:
	int cantidadPrendas;
	int precio;
	
public:
	void agregar(int a);
	int  getCodigo(int a);
	void Eliminar(int tamanio, int codigoPrenda, int codigo[]);
    void Comprar(float gasto, float saldo, int codigo);
	void Historial();
};

