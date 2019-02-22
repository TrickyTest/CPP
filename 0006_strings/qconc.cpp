#include <iostream>
#include <string>
int main(){
using namespace std;
string f = "a" + "b" + to_string(10*20)+"\012";
cout << f;
return 0;
}



