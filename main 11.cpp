

#include <iostream>
#include <cstdlib> 1
#include <ctime>   

int main() {
    
    srand(static_cast<unsigned int>(time(0))); 
    const int secretTarget = rand() % 100 + 1; 
    
    int guess = 0;
    int attempts = 0;

    std::cout << "--- Welcome to the Number Guessing Game! ---" << std::endl;
    std::cout << "I have picked a number between 1 and 100." << std::endl;

    
    while (guess != secretTarget) {
        
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        
        if (guess > secretTarget) {
            std::cout << "Too High!" << std::endl;
        } 
        else if (guess < secretTarget) {
            std::cout << "Too Low!" << std::endl;
        } 
        else {
            std::cout << "Correct!" << std::endl;
        }
    }

    std::cout << "You won in " << attempts << " attempts!" << std::endl;

    return 0;
}
	
