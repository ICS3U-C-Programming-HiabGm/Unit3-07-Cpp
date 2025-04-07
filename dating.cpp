// Created by: Hiab G
// Date: Wed, march. 28th
// This program 


#include <iostream>
#include <random>

int main() {

std::string playerAgeAsString;
int playerAge;

try {

// Get player's age and convert 
std::cout << "Enter your age: ";
std::cin >> playerAgeAsString;
playerAge = std::stoi(playerAgeAsString);

// check if the age is okay 
    if (playerAge > 25 && playerAge < 40) {
            std::cout << "You can date my grandchild!" << std::endl;
        } else {
            std::cout << "You can not date my grandchild." << std::endl;
        }

}
catch (std::invalid_argument) {
std::cout << playerAgeAsString << " is not a valid age.\n";
}
    return 0;
}

