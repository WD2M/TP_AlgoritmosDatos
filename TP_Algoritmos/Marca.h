#pragma once
#include "Vestimenta.h"
#include <string>
#include <iostream>
using namespace std;

class Marca : Vestimenta
{
private:
	string nombreMarca;
	int N;
	bool disponibilidad;
public:
	/*Marca(genero* g)

	{
		N = 1 + rand() % (6);
		if (g->getgenero() == "VestimentaHombre")
		{
			if (N == 1)
			{
				nombreMarca = "Shein";
			}
			if (N == 2)
			{
				nombreMarca = "Romwe";
			}
			if (N == 3)
			{
				nombreMarca = "Zaful";
			}
			if (N == 4)
			{
				nombreMarca = "Fashion Nova";
			}
			if (N == 5)
			{
				nombreMarca = "H&M";
			}
			if (N == 6)
			{
				nombreMarca = "Forever 21";
			}
		}
		if (g->getgenero() == "VestimentaMujer")
		{
			if (N == 1)
			{
				nombreMarca = "Shein";
			}
			if (N == 2)
			{
				nombreMarca = "Romwe";
			}
			if (N == 3)
			{
				nombreMarca = "Zaful";
			}
			if (N == 4)
			{
				nombreMarca = "Fashion Nova";
			}
			if (N == 5)
			{
				nombreMarca = "H&M";
			}
			if (N == 6)
			{
				nombreMarca = "Forever 21";
			}
		}
	}*/
	~Marca();
	string getmarca()
	{
		return "";//Marca;
	}

};