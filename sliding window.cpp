#include <iostream>
#include <vector>
#include <limits.h> 

using namespace std;
int maxSumKConsecutive(const vector<int>& arr, int k) {
    int n = arr.size();

    if (n < k) {
        cout << "Invalid" << endl;
        return -1; 
    }

    int max_sum = 0, window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; 
        max_sum = max(max_sum, window_sum); 
    }

    return max_sum;
}

int main() {
    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
    cout << "Maximum sum of " << k1 << " consecutive elements: " << maxSumKConsecutive(arr1, k1) << endl;

    vector<int> arr2 = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    cout << "Maximum sum of " << k2 << " consecutive elements: " << maxSumKConsecutive(arr2, k2) << endl;

    vector<int> arr3 = {2, 3};
    int k3 = 3;
    cout << "Maximum sum of " << k3 << " consecutive elements: " << maxSumKConsecutive(arr3, k3) << endl;

    return 0;
}
