#include <iostream>
using namespace std;

void fibonacci(int* arr, int size) {
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < size; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int search(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    const int size = 30;
    int fib[size];

    fibonacci(fib, size);

    cout << "Fibonacci sequence:\n";
    for (int i = 0; i < size; i++) {
        cout << fib[i] << " ";
    }
 

    int number;
    cout << "\nEnter a number to search: ";
    cin >> number;

    int index = search(fib, size, number);

    if (index != -1) {
        cout << "The number is in the sequence at index: " << index << endl;
    }
    else {
        cout << "The number is not found in the Fibonacci sequence.\n";
    }
}
