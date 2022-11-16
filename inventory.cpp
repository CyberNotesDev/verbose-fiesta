#include <iostream>
#include <string>

using namespace std;

void order(string pizza) {
 cout << "You're ordering a " 
}

int main () { 
 // Assign variables for the amount we have of that food/drink 
 unsigned short int twoLiterOfCola = 8, twoLiterOfCherryCola = 4, twoLiterOfSprite = 4, twoLiterOfDietCola = 4;
 unsigned short int twentyOzOfCola = 16, twentyOzOfCherryCola = 4, twentyOzOfLiterOfSprite = 4, twentyOzOfLiterOfDietCola = 8;
 unsigned short int tenInchDeep = 20, fourteenInchDeep =, sixteenInchDeep;
 // Price amount of deep dish pans
 unsigned double priceOfTenInchDeep = 5.00, priceOfFourteenInchDeep, priceOfSixteenInchDeep;
 // Actual price of food/drinks before tax
 unsigned short double netPrice;
 // Tax amount in Michigan
 unsigned short double salesTax = 1.06;
 // Total Price the customer has to pay 
 unsigned short double totalPrice = netPrice * salesTax;
 // Stores order 
 string order;
 cout << "What would you like to order today? ";
 cin >> order;
 
 if (order == "Deep Dish Small") {
  netPrice = priceOfTenInchDeep;
  // Total Price the customer has to pay 
  unsigned short double totalPrice = netPrice * salesTax;
  cout << "You will now owe " << totalPrice;
 }
}
