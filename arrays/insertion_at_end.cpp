#include <iostream>

using namespace std;

int main() {
    const int maxSize = 50;
    int a[maxSize], size, i;

    cout << "Enter size of the array (max 50): ";
    cin >> size;

    if (size <= maxSize && size >= 0) {
        cout << "Enter " << size << " elements: ";
        for (i = 0; i < size; ++i) {
            cin >> a[i];
        }

        // Displaying initial array
        cout << "Array elements: ";
        for (i = 0; i < size; ++i) {
            cout << a[i] << " ";
        }

        // Insertion at the end of the array
        if (size < maxSize) {
            int num;
            cout << "\nEnter number to insert at the end: ";
            cin >> num;

            a[size] = num;
            size++;

            // Displaying modified array after insertion
            cout << "Array after insertion: ";
            for (i = 0; i < size; ++i) {
                cout << a[i] << " ";
            }
        } else {
            cout << "IndexError: Array is already at maximum size";
        }
    } else {
        cout << "IndexError: Size out of bounds";
    }

    return 0;
}
