#include <iostream>

using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using pointer arithmetic to access array elements
    cout << "Value at *a: " << *a << endl; // Outputs the first element of the array
    cout << "Value at *(a + 1): " << *(a + 1) << endl; // Outputs the second element of the array

    int *p = a;
    cout << "Value at *p (after assigning p = a): " << *p << endl; // Outputs the first element of the array using the pointer

    char c[] = "Abhishek Chandra";
    char *ch = c;
    cout << "Value at c: " << c << endl; // Outputs the complete string stored in 'c'

    return 0;
}
