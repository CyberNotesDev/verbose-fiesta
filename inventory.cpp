#include <iostream>
#include <string>
using namespace std;

void askCustomer() {
 string customersRequest;
 string keyWordPop = "pop";
 cout << "Welcome to Chicago Style Pizza, How may we help you today! << endl;
  
 getline(cin, customersRequest);
 string findKeyWordPop = customersRequest.find(keyWordPop);
 if (findKeyWordPop != npos) {
  cout << "Found keyword pop" << endl;
 }
}

int main () {
 unsigned int popsBought;
 unsigned int cola = 4, cherryCola = 4, sprite = 4, dietCola = 4;
  
 askCustomer();
  
 cout << "How many pops would you like? ";
 cin >> popsBought;
 
 unsigned int totalPopsBought = cola - popsBought;
 cola = cola - popsBought;
 
}
