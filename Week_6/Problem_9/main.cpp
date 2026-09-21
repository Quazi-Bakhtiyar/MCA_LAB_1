#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 elements: ";

    // Reading elements using pointer
    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }

    // Displaying elements using array
    cout << "The elements are: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
