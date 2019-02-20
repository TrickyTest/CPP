#include <string>
#include <iostream>


int main(){
	using namespace std;
	string a = "Hello";
	string b = "Hello";
	string c = "World";
	cout << a + " "+c << '\n';
	cout << (a == b) << '\n';
	cout << (a == c) << '\n';
}
