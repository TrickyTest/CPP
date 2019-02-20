#include <iostream>
#include <vector>
int average(std::vector<int> numbers) {
   int total{0};
   int avg;
   for (int i : numbers) total +=i;
   avg = total/numbers.size();
   return avg;
}
// Now I chose ints, although doubles could be a better choice, but that was not my prime concern now :P

int main(){
    std::cout << average({1,2,3,4,5,6,7,8,9,10}) << '\n';
}

