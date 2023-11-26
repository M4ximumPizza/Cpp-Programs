#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findMaximumSubarraySum(const vector<int>& arr) {
    int max_so_far = INT_MIN;
    int max_end_here = 0;

    for (int i = 0; i < arr.size(); i++) {
        max_end_here += arr[i];
        if (max_so_far < max_end_here) {
            max_so_far = max_end_here;
        }
        if (max_end_here < 0) {
            max_end_here = 0;
        }
    }

    return max_so_far;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSubarraySum = findMaximumSubarraySum(arr);

    cout << "Maximum subarray sum is: " << maxSubarraySum << endl;

    return 0;
}
