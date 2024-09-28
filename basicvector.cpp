#include <iostream>
#include <vector>  // Include the vector library

int main() {
    // Declare a vector of integers
    std::vector<int> numbers;

    // Add some elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Display the elements of the vector
    std::cout << "The elements in the vector are: ";
    for(int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
