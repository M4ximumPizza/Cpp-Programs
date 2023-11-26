#include <iostream>

using namespace std;

const int DIM1 = 2;
const int DIM2 = 3;
const int DIM3 = 4;

void displayArray(int arr[][DIM2][DIM3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < DIM3; ++k) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void initializeArray(int arr[][DIM2][DIM3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < DIM3; ++k) {
                cin >> arr[i][j][k];
            }
        }
    }
}

int main() {
    int arr3D[DIM1][DIM2][DIM3] = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
        {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
    };

    cout << "Compile-time Initialized 3D Array:" << endl;
    displayArray(arr3D, DIM1, DIM2);

    int runtimeArr3D[DIM1][DIM2][DIM3];

    cout << "Enter elements for 3D Array:" << endl;
    initializeArray(runtimeArr3D, DIM1, DIM2);

    cout << "Run-time Initialized 3D Array:" << endl;
    displayArray(runtimeArr3D, DIM1, DIM2);

    return 0;
}
