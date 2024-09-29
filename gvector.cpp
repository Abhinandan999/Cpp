#include <iostream>
#include <stdexcept>

template<typename T>
class Vector {
private:
    T* data;
    size_t size;
    size_t capacity;

    // Function to resize the vector when capacity is full
    void resize(size_t new_capacity) {
        T* new_data = new T[new_capacity];
        for (size_t i = 0; i < size; ++i) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }

public:
    // Constructor to initialize vector with default capacity
    Vector() : size(0), capacity(2) {
        data = new T[capacity];
    }

    // Destructor to free memory
    ~Vector() {
        delete[] data;
    }

    // Function to get the current size of the vector
    size_t getSize() const {
        return size;
    }

    // Function to check if the vector is empty
    bool isEmpty() const {
        return size == 0;
    }

    // Function to access elements (with bounds checking)
    T& at(size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    // Function to add an element to the end of the vector
    void push_back(const T& value) {
        if (size == capacity) {
            resize(2 * capacity); // Double the capacity when full
        }
        data[size++] = value;
    }

    // Function to remove the last element from the vector
    void pop_back() {
        if (size > 0) {
            --size;
        } else {
            throw std::out_of_range("No elements to pop");
        }
    }

    // Overloading the [] operator for easier access (no bounds checking)
    T& operator[](size_t index) {
        return data[index];
    }

    // Function to get the current capacity of the vector
    size_t getCapacity() const {
        return capacity;
    }

    // Function to clear the vector
    void clear() {
        size = 0;
    }

    // Function to insert an element at a specific index
    void insert(size_t index, const T& value) {
        if (index > size) {
            throw std::out_of_range("Index out of bounds");
        }
        if (size == capacity) {
            resize(2 * capacity);
        }
        for (size_t i = size; i > index; --i) {
            data[i] = data[i - 1];
        }
        data[index] = value;
        ++size;
    }

    // Function to remove an element at a specific index
    void erase(size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        for (size_t i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --size;
    }
};

int main() {
    Vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "Vector size: " << vec.getSize() << "\n";
    std::cout << "Vector capacity: " << vec.getCapacity() << "\n";

    std::cout << "Elements: ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";

    vec.insert(1, 15);
    std::cout << "After inserting 15 at index 1: ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";

    vec.pop_back();
    std::cout << "After popping back: ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
