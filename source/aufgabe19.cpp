#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <iostream>


int checksum(long a)
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

TEST_CASE("checking the checksum", "[checksum]")
{
	REQUIRE(checksum(116068) == 22);
	REQUIRE(checksum(123456789) == 45);
	REQUIRE(checksum(00000) == 0);
	REQUIRE(checksum(100100) == 2);

	
}



int main(int argc, char* argv[])
{
	
	int c = checksum(116068);

	std::cout << c;
	std::cout << " ist checksum. \n";

	return Catch::Session().run( argc, argv );
}