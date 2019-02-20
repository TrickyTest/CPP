#include <iostream>
int main(){
    int a = 5;
    int *b = &a;
    int c = 0;
    c = a * b; // Is this a multiplied by (reference to) b? Or do we get the value b points to somehow? Or does it actually store 25 into c (as 5x5=25)?
    std::cout << c;
    return 0;
}

