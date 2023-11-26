#include <iostream>

using namespace std;

int main() {
    // Compile time Initialization of arrays
    int a[5] = {3, 1, 7, 1, 7};  // Integers array with 5 elements
    char b[10] = {'d', 'o', 'g', 'e'};  // Characters array with 4 elements (5th element null-terminator)
    float c[4] = {1.2, 2.3, 36.717, 37.550};  // Floating-point numbers array with 4 elements

    // Run time initialization
    int d[10];
    cout << "Enter 2 numbers: ";
    for (int i = 0; i < 2; ++i) {
        cin >> d[i]; // Input numbers during runtime
    }

    // Run time declaration based on user input
    int n;
    cout << "Enter size of the array 'e': ";
    cin >> n;
    int e[n];

    cout << "Size of 'e': " << sizeof(e) << " bytes";  // Outputs the size of array 'e' in bytes

    return 0;
}
