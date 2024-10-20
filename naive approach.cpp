#include <iostream>
#include <vector>

using namespace std;

bool findPairNaive(const vector<int>& A, int X) {
    int N = A.size();
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                return true; 
            }
        }
    }
    return false; 
}

int main() {
    vector<int> A = {1, 2, 4, 5, 7, 11};
    int X = 9;
    if (findPairNaive(A, X)) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl; 
    }

    return 0;
}
