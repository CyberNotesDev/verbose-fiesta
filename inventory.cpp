#include <iostream>
using namespace std;

int main () {
 unsigned int popsBought;
 unsigned int cola = 4, cherryCola = 4, sprite = 4, dietCola = 4;
  
 cout << "We have " << cola << " colas' << endl;
  
 cout << "How many pops would you like? ";
 cin >> popsBought;
 
 unsigned int totalPopsBought = cola - popsBought;
 cola = cola - popsBought;
 
}
