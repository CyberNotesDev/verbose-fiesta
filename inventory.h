#include <iostream>
#include <string>
// So I can set decimal precision
#include <iomanip>
// Uses sleep_for and sleep_until 
#include <thread>
// Uses seconds
#include <chrono>
using namespace std;
// Import my own header
// #include <inventory.h>
#include <iostream>
#include <string>
// So I can set decimal precision
#include <iomanip>
using namespace std;
// Sets the namespace to these because if I didn't it would look like this mess
// std::this_thread::sleep_for(std::chrono::seconds(5));
using namespace std::this_thread;
using namespace std::chrono;

void welcome() {
    cout << "Welcome to Chicago Style Pizza!\n";
    sleep_for(seconds(2));
};

void calculateTotal() {
    // Assign variables for the amount we have of that food/drink 
 unsigned short int twoLiterOfCola = 8, twoLiterOfCherryCola = 4, twoLiterOfSprite = 4, twoLiterOfDietCola = 4;
 unsigned short int twentyOzOfCola = 16, twentyOzOfCherryCola = 4, twentyOzOfLiterOfSprite = 4, twentyOzOfLiterOfDietCola = 8;
 unsigned short int tenInchDeep = 20, fourteenInchDeep = 25, sixteenInchDeep = 15;
 // Price amount of deep dish pans
 float priceOfTenInchDeep = 8.25, priceOfFourteenInchDeep = 13.55, priceOfSixteenInchDeep = 15.50;
 // Actual price of food/drinks before tax
 float netPrice;
 // Tax amount in Michigan
 float salesTax = 1.06;
  netPrice = priceOfTenInchDeep;
  // Total Price the customer has to pay 
  float totalPrice = netPrice * salesTax;
  cout << "You will now owe " << totalPrice;
}

void myOrder() {
 // Sets up float precision  
 cout << fixed;
 cout << setprecision(2);
 // Stores order 
 string order;
 
 cout << "What would you like to order today (Deep Dish Small, Deep Dish Large, Deep Dish Family)? ";
 getline(cin, order);
 
 if (order == "Deep Dish Small") {
     calculateTotal();
 } else if (order == "Deep Dish Large") {
     calculateTotal();
 } else if (order == "Deep Dish Family") {
     calculateTotal();
 } else {
    cout << "Get out please!\n";
 }
}
