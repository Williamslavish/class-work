#include <iostream>
#include <string>

int countVowels(const std::string& str) {
    int count = 0;
    std::string vowels = "aeiouAEIOU";
    
    for (char c : str) {
        if (vowels.find(c) != std::string::npos) {
            count++;
        }
    }
    
    return count;
}
int main() {
    std::string testString = "Hello World";
    int vowelCount = countVowels(testString);
    
    std::cout << "The string \"" << testString << "\" has " << vowelCount << " vowels." << std::endl;
    
    std::string anotherString = "Programming is fun";
    std::cout << "The string \"" << anotherString << "\" has " << countVowels(anotherString) << " vowels." << std::endl;
    
    return 0;
}
