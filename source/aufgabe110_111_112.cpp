#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <iostream>


int checksum(long a)	//Aufgabe 1.9
{
	int sum = 0;
	int m;
	while(a>0){
		m = a%10;
		sum = sum + m;
		a = a-m;
		a = a/10;
	}


	return sum;
}

long sumMultiples()		//Aufgabe 1.10
{
	long sum = 0;
	for(int i=1; i<=1000;i++){
	//	std::cout << i;
	//	std::cout << " \n";
		if(i%3 ==0 || i%5 ==0){
			sum = sum+i;
		}
	}


	return sum;
}

float fract(float a)		//Aufgabe 1.11
{
  int n(a);
  return a-float(n);
}

float volume(float r, float h)		//Aufgabe 1.12
{
	float vol;

	vol = M_PI*r*r*h;

	return vol;
}

float surface(float r, float h)		//Aufgabe 1.12
{
	float sf;

	sf = 2*M_PI*r*(r+h);

	return sf;

}


TEST_CASE("checking the checksum", "[checksum]")	//Test Cases Aufgabe 1.9
{
	REQUIRE(checksum(116068) == 22);
	REQUIRE(checksum(123456789) == 45);
	REQUIRE(checksum(00000) == 0);
	REQUIRE(checksum(100100) == 2);

	
}

TEST_CASE("checking sumMultiples", "[sumMultiples]")		// Test Cases Aufgabe 1.10
{
	REQUIRE(sumMultiples() == 234168);	
}

TEST_CASE("checking fract", "[fract]")			//Test Cases Aufgabe 1.11
{
		REQUIRE(fract(1.23456) == 0.23456);

}

TEST_CASE("checking the volume", "[volume]")		//Test Cases Aufgabe 1.12
{
	REQUIRE(volume(10, 10) == Approx(3141.593));
}

TEST_CASE("checking the surface", "[surface]")		//Test Cases Aufgabe 1.12
{
	REQUIRE(surface(10, 10) == Approx(1256.637));
}


int main(int argc, char* argv[])
{
	
/*	int c = sumMultiples();

	std::cout << c;
	std::cout << " ist checksum. \n";
*/
	return Catch::Session().run( argc, argv );
}