#define CATCH_CONFIG_RUNNER
//#include "catch.hpp"
#include <cmath>
#include <iostream>

int gcd(int a, int b )
{
	int ggt = 1;
	if(a > b)
	{
		int c = a;
		a = b;
		b = c;
	}

	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				ggt = i;
			}
		}
	}


	return ggt;
}

/*TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(9,6) == 3);
	REQUIRE(gcd(3,7) == 1);
}
*/
int main(int argc, char* argv[])
{
	//return Catch::Session().run( argc, argv );
	int c = gcd(10,50);

	std::cout << c;
	std::cout << " ist ggt. \n";
}