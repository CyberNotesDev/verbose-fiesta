#include <iostream>
#include <string>
#include <thread> // Uses sleep_for
#include <chrono> // uses seconds()
#include <iomanip> // So I can set decimal precision

#include "inventory.h"

int main() {
    std::cout << std::endl << std::endl <<  std::setw(60) <<  std::setfill('=') << " Welcome to Chicago Style Pizza! " << std::setw(29) << std::setfill('=') << "\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleeps for 1 1/2 seconds
    
    myOrder();

    std::cout << std::endl << "=======================================================================================" << std::endl << std::endl;

    return 0;
}