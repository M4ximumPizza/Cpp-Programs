#include <iostream>

using namespace std;

int main(){
    int a[2][3][4] = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
        {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
    };

    cout << "Addresses of each layer:" << endl;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << "Layer " << i << ", Row " << j << ": " << a[i][j] << endl;
        }
    }

    cout << "Address of Layer 1 (a+1): " << a+1 << endl;
    cout << "Address of First Element (*a): " << *a << endl;
    cout << "Value at a[1][2][3]: " << a[1][2][3] << endl;
    cout << "Value at *(a[1][2]+3): " << *(a[1][2]+3) << endl;

    cout << "All elements:" << endl;
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 4; ++k){
                cout << "a[" << i << "][" << j << "][" << k << "]: " << *(*(*(a+i)+j)+k) << endl;
            }
        }
    }

    cout << "Specific elements:" << endl;
    cout << "Value at a[0][1][2]: " << *(*(*(a)+1)+2) << endl; // Same as a[0][1][2]
    cout << "Value at a[0][0][0]: " << ***a << endl; // Same as a[0][0][0]

    return 0;
}
