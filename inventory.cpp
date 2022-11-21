#include <iostream>
#include <string>
#include <thread> // Uses sleep_for
#include <chrono> // uses seconds
#include <iomanip> // So I can set decimal precision
#include "inventory.h"

int main() {
    std::cout << "Welcome to Chicago Style Pizza!\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    myOrder();

    return 0;
}
