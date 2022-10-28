#include "swap.h"

void swap::run()
{
	int temp;
	temp = _a;
	_a = _b;
	_b = temp;
}

void swap::printInfo(){
	std::cout << "_a = " << _a << std::endl;
	std::cout << "_b = " << _b << std::endl;
}

/*
void swap(int &a,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
*/
