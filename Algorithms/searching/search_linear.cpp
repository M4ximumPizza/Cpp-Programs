#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int linear_search(const vector<int>& a, int k) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == k) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Element not found
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    if (size <= 0 || size > 50) {
        cout << "Size out of bounds." << endl;
        return 1;
    }

    vector<int> a(size);

    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }

    int elementToFind;
    cout << "Enter element to find: ";
    cin >> elementToFind;

    int index = linear_search(a, elementToFind);
    if (index != -1) {
        cout << "Found at index: " << index << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
