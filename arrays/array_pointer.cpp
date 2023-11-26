#include <iostream>

using namespace std;

int main() {
    int a[] = {5, 8, 7, 8, 9};
    int *p;
    p = a; // Pointer to the beginning of array 'a'

    // Addresses and indices
    cout << "&a[0]: " << &a[0] << " "
         << "p: " << p << " "
         << "a: " << a << " "
         << "&a: " << &a << endl;

    // Addresses of array elements
    for (int i = 0; i < 5; i++) {
        cout << "&a[" << i << "]: " << &a[i] << endl;
    }

    // Accessing array elements through pointers
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "]: " << a[i] << " "
             << "*(a+" << i << "): " << *(a + i) << " "
             << "*(p+" << i << "): " << *(p + i) << " "
             << "i[a]: " << i[a] << " "
             << "&p[" << i << "]: " << &p[i] << endl;
    }

    // Other expressions
    cout << "2[a]: " << 2 [a] << endl; // Same as a[2]

    cout << "&a + 1: " << &a + 1 << endl; // Address after the end of the array
    cout << "*(a + 1): " << *(a + 1) << endl; // Value at index 1
    cout << "*a + 1: " << *a + 1 << endl; // Value at index 0 + 1
    cout << "(*p / 2): " << (*p / 2) << endl; // Value at index 0 / 2

    return 0;
}
