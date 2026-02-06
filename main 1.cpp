#include <iostream>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int a = 60, b = 89;
    int result = sum(a, b);
    
    std::cout << "The sum of " << a << " and " << b << " is: " << result << std::endl;
    
    return 0;
}