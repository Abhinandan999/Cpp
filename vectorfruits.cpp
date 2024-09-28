#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declare a vector of strings
    std::vector<std::string> fruits;

    // Add elements to the vector
    fruits.push_back("Apple");
    fruits.push_back("Banana");
    fruits.push_back("Mango");

    // Display the elements of the vector
    std::cout << "Fruits in the list: ";
    for (const std::string& fruit : fruits) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    // Remove the last element from the vector
    fruits.pop_back();

    // Display the updated list
    std::cout << "After removing the last fruit: ";
    for (const std::string& fruit : fruits) {
        std::cout << fruit << " ";
    }
    std::cout << std
