#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
int maxProfit(const vector<int>& prices) {
    int max_profit = 0; 
    int min_price = INT_MAX; 

    for (int price : prices) {
        if (price < min_price) {
            min_price = price;
        }
        int profit = price - min_price;
        max_profit = max(max_profit, profit);
    }

    return max_profit; 
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl; /

    return 0;
}
