#include <iostream>

using namespace std; // To hell with ya!

template <typename Proefje> Proefje Probeer(Proefje Variabele) {
	cout << sizeof(Proefje) << " / " << sizeof(Variabele) << " => ";
	return Variabele;
}


int main(){
	int i{3};
	long l{3};
	char c{'a'};
	char * s = "Hello World";
	cout << "int\t" << Probeer(i);
	cout << "\nlong\t" << Probeer(l);
	cout << "\nchar\t" << Probeer(c);
	cout << "\nstring\t" << Probeer(s) << "\n";
	return 0;
}

/* And this kids is called "Dirty code, straight from Hell!" */
