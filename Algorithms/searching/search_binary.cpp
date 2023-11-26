#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binary_search(const vector<int>& a, int k){
    int l = 0, r = a.size() - 1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(k == a[mid]){
            return mid;
        } else if(k < a[mid]){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    if(size <= 0 || size > 50){
        cout << "Size out of bounds." << endl;
        return 1;
    }

    vector<int> a(size);

    cout << "Enter elements: ";
    for(int i = 0 ; i < size; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int data;
    cout << "Enter element to find (binary search): ";
    cin >> data;

    int res = binary_search(a, data);
    if(res != -1){
        cout << "Position: " << res + 1 << " , Index: " << res << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
