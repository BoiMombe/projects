#include <iostream>
#include <string>

int main() {
    // Initialize an array of strings representing elements
    std::string items[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B17"};
    
    // Iterate through each element in the array
    for (const auto& item : items) {
        // Check if the item starts with the letter 'B'
        if (item.front() == 'B') {
            // Print the item if it starts with 'B'
            std::cout << item << std::endl;
        }
    }
    
    return 0;
}
