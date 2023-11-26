#include <iostream>

using namespace std;

int main(){
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Display the address of each row
    for(int i = 0; i < 3; i++)
        cout << "Address of Row " << i << ": " << a[i] << endl;

    // Address arithmetic and element access
    cout << "Address of Row 1 (a+1): " << a+1 << endl;
    cout << "Address of First Element (*a): " << *a << endl;
    cout << "Value at a[1][2]: " << a[1][2] << endl;
    cout << "Value at *(a[1]+2): " << *(a[1]+2) << endl;

    // Displaying all elements
    cout << "All elements:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "a[" << i << "][" << j << "]: " << *(*(a+i)+j) << endl;
        }
    }

    // Displaying specific elements
    cout << "Specific elements:" << endl;
    cout << "Value at a[0][1]: " << *(*a + 1) << endl; // Same as a[0][1]
    cout << "Value at a[0][0]: " << **a << endl; // Same as a[0][0]

    return 0;
}
