#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i] - buyPrice);
        }

        return profit;
    }
};

int main() {
    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = solution.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}
