#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  


std::vector<std::string> reverseStrings(const std::vector<std::string>& strings) {
    std::vector<std::string> result; 
    
    
    for (const std::string& str : strings) {
        std::string reversed = str;  
        std::reverse(reversed.begin(), reversed.end());  
        result.push_back(reversed);  
    }
    
    return result;
}


void printVector(const std::vector<std::string>& vec, const std::string& label) {
    std::cout << label << ": ";
    if (vec.empty()) {
        std::cout << "Empty";
    } else {
        for (size_t i = 0; i < vec.size(); i++) {
            std::cout << "\"" << vec[i] << "\"";
            if (i < vec.size() - 1) std::cout << ", ";
        }
    }
    std::cout << std::endl;
}


int main() {
    
    std::vector<std::string> strings1 = {"big", "world", "programming", "test"};
    std::vector<std::string> reversed1 = reverseStrings(strings1);
    printVector(strings1, "Original list");
    printVector(reversed1, "Reversed list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings2 = {"radar", "level", "madam", "racecar"};
    std::vector<std::string> reversed2 = reverseStrings(strings2);
    printVector(strings2, "Original list");
    printVector(reversed2, "Reversed list");
    std::cout << "(Note: Palindromes remain the same when reversed)" << std::endl << std::endl;
    
    
    std::vector<std::string> strings3 = {"u", "b", "p", "d"};
    std::vector<std::string> reversed3 = reverseStrings(strings3);
    printVector(strings3, "Original list");
    printVector(reversed3, "Reversed list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings4 = {"", "big", "", "world"};
    std::vector<std::string> reversed4 = reverseStrings(strings4);
    printVector(strings4, "Original list");
    printVector(reversed4, "Reversed list");
    std::cout << std::endl;

    
    std::vector<std::string> strings5 = {};
    std::vector<std::string> reversed5 = reverseStrings(strings5);
    printVector(strings5, "Original list");
    printVector(reversed5, "Reversed list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings6 = {"Big World", "C++ Programming", "Reverse me!"};
    std::vector<std::string> reversed6 = reverseStrings(strings6);
    printVector(strings6, "Original list");
    printVector(reversed6, "Reversed list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings7 = {"183", "406", "700"};
    std::vector<std::string> reversed7 = reverseStrings(strings7);
    printVector(strings7, "Original list");
    printVector(reversed7, "Reversed list");
    
    return 0;
}