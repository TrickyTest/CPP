#include <iostream>



#define myTemplate template <typename T> T
myTemplate add(T a,T b){ return a+b; }
myTemplate sub(T a,T b){ return a-b; }

int main(){
	std::cout << add(1,2) << '\n' << sub(4,2) << '\n';
}
