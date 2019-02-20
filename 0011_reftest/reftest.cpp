#include <iostream>


int main(){
	int a = 5;
	const int &b = a;
	a = 4;
	// b = 3; // This should be error? --> confirmed
	std::cout << b <<'\n';
}
