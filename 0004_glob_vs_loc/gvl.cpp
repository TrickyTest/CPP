#include <iostream>

int a{5};

int main(){
	int a{6};
	std::cout << "local\t" << a << '\n';
	std::cout << "global\t" << ::a << '\n';
}
