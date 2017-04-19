#include <iostream>




int main()
{
	int n =1;
	int i= 1;

	while(i<=20){
		if(n%i != 0){
			n++;
			i = 0;
		}
		++i;
	}
	
  	std::cout << "Die Zahl ist: ";
  	std::cout << n << std::endl;
  	return 0;
}
