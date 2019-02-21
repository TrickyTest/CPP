#include <iostream>
#include <string>

std::string StringToUpper(std::string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);

    return strToConvert;
}


int main(){
	std::string a = "Hello World ";
	std::cout << a << StringToUpper(a) << "\n\n";
}
