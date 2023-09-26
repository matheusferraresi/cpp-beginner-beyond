#include <iostream>

std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line 
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    // Write your code above this line
    return reversed;
}

int main() {
    std::string input = "Hello, World!";
    std::string reversed = reverse_string(input);
    
    std::cout << "Input: " << input << std::endl;
    std::cout << "Reversed: " << reversed << std::endl;
    
    return 0;
}