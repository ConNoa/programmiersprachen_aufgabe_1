#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <iostream>


int checksum(long a)				//Aufgabe 1.9
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

long sumMultiples()					//Aufgabe 1.10
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

float fract(float a)				//Aufgabe 1.11
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

long factorial(int x)				//Aufgabe 1.13
{
	long p = 1;

	for(int i=1; i<=x; i++){
		p = p*i;
	}
	return p;
}

float binomial(int n, int k)		//Aufgabe1.14
{
	float b;
	b = (factorial(n)/(factorial(k)*(factorial(n-k))));
	return b;
}

bool is_prime (int n)				//Aufgabe1.15
{
	if(n<2)
	{
		return false;
	}

  for (int i = 2; i < n; i++)
  {
    if ( n%i == 0)
    {
      return false;
    }
    
  }
  return true;
}

double mileToKilometer(double m)
{
	double k;
	k = m*1.60934;
	return k;
}

TEST_CASE("checking mileToKilometer", "[mileToKilometer]")			//Test Cases Aufgabe 1.9
{
	REQUIRE(mileToKilometer(1) == Approx(1.60934));
	
}

TEST_CASE("checking the checksum", "[checksum]")			//Test Cases Aufgabe 1.9
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


TEST_CASE("checking fract", "[fract]")						//Test Cases Aufgabe 1.11
{
		REQUIRE(fract(1.23456) == Approx(0.23456));
		REQUIRE(fract(4.98765) == Approx(0.98765));
}


TEST_CASE("checking the volume", "[volume]")				//Test Cases Aufgabe 1.12
{
	REQUIRE(volume(10, 10) == Approx(3141.593));
}

TEST_CASE("checking the surface", "[surface]")				//Test Cases Aufgabe 1.12
{
	REQUIRE(surface(10, 10) == Approx(1256.637));
}


TEST_CASE("checking factorial", "[factorial]")				//Test Cases Aufgabe 1.13
{
		REQUIRE(factorial(5) == 120);
		REQUIRE(factorial(3) == 6);
}

TEST_CASE("checking binomial", "[binomial]")				//Test Cases Aufgabe 1.14
{
		REQUIRE(binomial(5, 3) == 10);
		REQUIRE(binomial(5, 2) == 10);
		REQUIRE(binomial(7, 2) == 21);
		REQUIRE(binomial(7, 3) == 35);
		REQUIRE(binomial(7, 4) == 35);
		REQUIRE(binomial(5, 0) == 1);
}

TEST_CASE("checking is_prime", "[is_prime]")				// Test Cases Aufgabe 1.15
{
	REQUIRE(is_prime(10) == false);	
	REQUIRE(is_prime(9) == false);	
	REQUIRE(is_prime(11) == true);	
	REQUIRE(is_prime(25) == false);	
	REQUIRE(is_prime(7) == true);	
	REQUIRE(is_prime(13) == true);	
	REQUIRE(is_prime(0) == false);
	REQUIRE(is_prime(1) == false);
	REQUIRE(is_prime(2) == true);

}

int main(int argc, char* argv[])
{
	
/*	int c = sumMultiples();

	std::cout << c;
	std::cout << " ist checksum. \n";
*/
	return Catch::Session().run( argc, argv );
}