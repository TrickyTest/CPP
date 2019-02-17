#include <iostream>
 
int main()
{
    char ch{0};

    do {
     std::cout << "Input a keyboard character: ";
 
     std::cin >> ch;
     std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
 
    } while (ch!='0');

    return 0;
}
