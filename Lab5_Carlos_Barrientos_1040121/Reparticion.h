#pragma once
#include "Pila.h"
#include <iostream>
#include <string.h>
#include <math.h>


using namespace System;
using namespace System::ComponentModel;


int holaMundo() {
	return 5216842;
}

class ReparticionCartas
{
private:
	
public:
	Stack<std::string>* numbers = new Stack<std::string>();


	void repartirCartas() {

		std::string carta1 = "R1";
		std::string carta2 = "R12";
		std::string carta3 = "N9";
		std::string carta4 = "N3";
		numbers->push(&carta1);
		numbers->push(&carta2);
		numbers->push(&carta3);
		numbers->push(&carta4);

	}	
	std::string MostrarCarta() {
		repartirCartas();
		std::string variable = *numbers->peek();
		return variable;
	}


};
