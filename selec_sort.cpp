#include <iostream>
using namespace std;

// Function to sort the array using selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to find the median of the sorted array
double findMedian(int arr[], int size) {
    if (size % 2 == 0) {
        // If even, median is average of two middle elements
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        // If odd, median is the middle element
        return arr[size / 2];
    }
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

    // Sorting the array
    selectionSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Finding and displaying the median
    double median = findMedian(arr, n);
    cout << "The median is: " << median << endl;

    return 0;
}
