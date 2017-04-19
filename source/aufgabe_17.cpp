/*
Signatur einer Funktion besteht aus dem Namen der Methode, 
der Anzahl sowie der Reihenfolge der zuweisungskompatiblen Parameterdatentypen.
*/
#include <iostream >

int var = 3;

double sum(double a, double b){
	return a + b;
}//a und b sind nach schließen des scopes nicht mehr gültig


int square(int var) {
	return var * var; 
}


int main () {
	for (int i = 0; i != 100; ++i) 
	{
	std::cout << "i^2 = " << square(i) << ’\n’; std::cout << "i+i = " << sum(i,i) << ’\n’;
	}// i ist nach schließen des scopes nicht mehr gültig

	return 0; 
}


//var ist die ganze zeit gültig, da außerhalb vom Scope deklariert