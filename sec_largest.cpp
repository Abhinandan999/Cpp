#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

// Function to find the second largest element in the array
int secondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return -1; // Return -1 if the array is too small
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found." << endl;
        return -1;
    }

    return secondLargest;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);
    if (result != -1) {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
