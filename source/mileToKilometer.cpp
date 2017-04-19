#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <iostream>
#include <string>


double mileToKilometer(double m)
{
	double k;
	k = m*1.609344;
	return k;
}

TEST_CASE("checking mileToKilometer", "[mileToKilometer]")			//Test Cases Aufgabe 1.9
{
	REQUIRE(mileToKilometer(1) == Approx(1.609344));
	
}
int main(int argc, char* argv[])
{
	std::cout << "Bitte geben sie den Wert in Meilen ein, den sie umrechnen wollen: \n";
	double miles = 0;
	std::cin >> miles;
	double kilometers = mileToKilometer(miles);
	std::cout << "Sind ";
	std::cout << kilometers;
	std::cout << " Kilometer. \n";
	return Catch::Session().run( argc, argv );
}