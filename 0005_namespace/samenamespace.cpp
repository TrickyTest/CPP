#include <iostream>
namespace jeroen {

     void helloworld(){
         std::cout << "Hello World\n";
     }

     void hi(){
         helloworld(); // does this work, since it's part of the same namespace? Or must I still rely on jeroen::helloworld()?
     }
}

int main() { jeroen::hi(); }
