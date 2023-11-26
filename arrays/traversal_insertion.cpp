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

        // Insertion at a specified position in the array
        int num, pos;
        cout << "\nEnter number and position to insert: ";
        cin >> num >> pos;

        if (pos >= 1 && pos <= size + 1) {
            // Efficient insertion method for an unsorted array where order doesn't matter
            if (size < maxSize) {
                for (i = size; i >= pos; --i) {
                    a[i] = a[i - 1];
                }
                a[pos - 1] = num;
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
            cout << "Error: Invalid position";
        }
    } else {
        cout << "IndexError: Size out of bounds";
    }

    return 0;
}
