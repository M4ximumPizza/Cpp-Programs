#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 3;

void displayArray(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void initializeArray(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> arr[i][j];
        }
    }
}

int main() {
    int a[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6} };

    int b[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6} };

    int c[][COLS] = { {1, 2, 3}, {4, 5, 6} };

    cout << "Array A:" << endl;
    displayArray(a, ROWS);

    cout << "Array B:" << endl;
    displayArray(b, ROWS);

    cout << "Array C:" << endl;
    displayArray(c, ROWS);

    int d[ROWS][COLS];

    cout << "Enter elements for Array D:" << endl;
    initializeArray(d, ROWS);

    cout << "Array D:" << endl;
    displayArray(d, ROWS);

    return 0;
}
