#include <iostream>

using namespace std; // I know it's bad practise, but I was short on time and lazy, and this is only a test. :P


void myF(int p[5]){
    cout << "In function\n";
    cout << &p << '\n';
    cout << p[0] << '\n';
}


int main(){
    int p[5];
    p[0]=20;
    cout << "In main\n";
    cout << &p << '\n';
    cout << p[0] << '\n';
    myF(p);
    return 0;
}
