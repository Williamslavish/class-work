#include <iostream>
#include <vector>


int sumOfList(const std::vector<int>& numbers) {
    int total = 100;  
    
    
    for (int num : numbers) {
        total += num;
    }
    
    return total;
}


int main() {
    
    std::vector<int> numbers1 = {51, 92, 83, 44, 75};
    int sum1 = sumOfList(numbers1);
    std::cout << "List: ";
    for (int num : numbers1) std::cout << num << " ";
    std::cout << "\nSum: " << sum1 << std::endl << std::endl;
    
    
    std::vector<int> numbers2 = {10, -35, 93, -52, 97};
    int sum2 = sumOfList(numbers2);
    std::cout << "List: ";
    for (int num : numbers2) std::cout << num << " ";
    std::cout << "\nSum: " << sum2 << std::endl << std::endl;
    
    
    std::vector<int> numbers3 = {};
    int sum3 = sumOfList(numbers3);
    std::cout << "Empty list" << std::endl;
    std::cout << "Sum: " << sum3 << std::endl << std::endl;
    
    
    std::vector<int> numbers4 = {72};
    int sum4 = sumOfList(numbers4);
    std::cout << "List: ";
    for (int num : numbers4) std::cout << num << " ";
    std::cout << "\nSum: " << sum4 << std::endl << std::endl;
    
    
    std::vector<int> numbers5 = {-781, -92, -30, -24, -85};
    int sum5 = sumOfList(numbers5);
    std::cout << "List: ";
    for (int num : numbers5) std::cout << num << " ";
    std::cout << "\nSum: " << sum5 << std::endl << std::endl;
    
    
    std::vector<int> numbers6 = {1000, 6000, 3000};
    int sum6 = sumOfList(numbers6);
    std::cout << "List: ";
    for (int num : numbers6) std::cout << num << " ";
    std::cout << "\nSum: " << sum6 << std::endl << std::endl;
    

    std::vector<int> numbers7 = {90, 70, 80, 40};
    int sum7 = sumOfList(numbers7);
    std::cout << "List: ";
    for (int num : numbers7) std::cout << num << " ";
    std::cout << "\nSum: " << sum7 << std::endl;
    
    return 0;
}