#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of A: " << endl;
    cin >> a;
    cout << "Enter the value of B: " << endl;
    cin >> b;

    // Swapping values using arithmetic operations
    a = a - b;
    b = a + b;
    a = b - a;

    cout << "Swapped values are: " << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
