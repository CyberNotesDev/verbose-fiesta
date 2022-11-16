#include <iostream>
#include <string>
// So I can set decimal precision
#include <iomanip>
using namespace std;

void myOrder() {
 // Sets up float precision  
 cout << fixed;
 cout << setprecision(2);
 // Assign variables for the amount we have of that food/drink 
 unsigned short int twoLiterOfCola = 8, twoLiterOfCherryCola = 4, twoLiterOfSprite = 4, twoLiterOfDietCola = 4;
 unsigned short int twentyOzOfCola = 16, twentyOzOfCherryCola = 4, twentyOzOfLiterOfSprite = 4, twentyOzOfLiterOfDietCola = 8;
 unsigned short int tenInchDeep = 20, fourteenInchDeep, sixteenInchDeep;
 // Price amount of deep dish pans
 float priceOfTenInchDeep = 5.00, priceOfFourteenInchDeep, priceOfSixteenInchDeep;
 // Actual price of food/drinks before tax
 float netPrice;
 // Tax amount in Michigan
 float salesTax = 1.06;
 // Total Price the customer has to pay 
 float totalPrice = netPrice * salesTax;
 // Stores order 
 string order;
 
 cout << "What would you like to order today? ";
 getline(cin, order);
 
 if (order == "Deep Dish Small") {
  netPrice = priceOfTenInchDeep;
  // Total Price the customer has to pay 
  totalPrice = netPrice * salesTax;
  cout << "You will now owe " << totalPrice;
 }
}