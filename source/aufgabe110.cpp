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

long sumMultiples()
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

TEST_CASE("checking the checksum", "[checksum]")
{
	REQUIRE(checksum(116068) == 22);
	REQUIRE(checksum(123456789) == 45);
	REQUIRE(checksum(00000) == 0);
	REQUIRE(checksum(100100) == 2);

	
}

TEST_CASE("checking sumMultiples", "[sumMultiples]")
{
	REQUIRE(sumMultiples() == 234168);
	
	
}



int main(int argc, char* argv[])
{
	
	int c = sumMultiples();

	std::cout << c;
	std::cout << " ist checksum. \n";

	return Catch::Session().run( argc, argv );
}