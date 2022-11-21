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
    std::cout << "You will now owe " << totalPrice;
}

void myOrder() {
    // Sets up float precision
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    // Stores order
    std::string order;

    std::cout << "What would you like to order today (Deep Dish Small, Deep Dish Large, Deep Dish Family)? ";
    getline(std::cin, order);

    if (order == "Deep Dish Small") {
        calculateTotal();
    }
    else if (order == "Deep Dish Large") {
        calculateTotal();
    }
    else if (order == "Deep Dish Family") {
        calculateTotal();
    }
    else {
        std::cout << "Get out please!\n";
    }
}