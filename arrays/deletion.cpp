#include <iostream>

using namespace std;

int main() {
    const int maxSize = 50;
    int array[maxSize], size;

    cout << "Enter size of the array (max 50): ";
    cin >> size;

    if (size <= maxSize && size > 0) {
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }

        int posToDelete;
        cout << "Enter position to delete: ";
        cin >> posToDelete;

        if (posToDelete >= 1 && posToDelete <= size) {
            int deletedItem = array[posToDelete - 1];
            for (int i = posToDelete - 1; i < size - 1; i++) {
                array[i] = array[i + 1];
            }
            size--;

            cout << "Array after deletion: ";
            for (int i = 0; i < size; i++) {
                cout << array[i] << " ";
            }

            cout << "\nDeleted item: " << deletedItem;
        } else {
            cout << "Error: Invalid Position";
        }

        // Deletion at the end
        /*
        size--;
        */

        // Deletion from the beginning
        /*
        for (int i = 0; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        size--;
        */
    } else {
        cout << "Index Error: Size out of bound";
    }
    return 0;
}
