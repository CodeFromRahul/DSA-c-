#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent items
struct Item {
    int weight;
    int value;
};

// Function to solve the 0/1 Knapsack problem
int knapsack(int capacity, const vector<Item>& items) {
    int n = items.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 0; w <= capacity; ++w) {
            if (items[i - 1].weight <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - items[i - 1].weight] + items[i - 1].value);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    vector<Item> items = {{2, 3}, {1, 2}, {3, 6}, {2, 1}, {1, 3}};
    int capacity = 5;

    int maxValue = knapsack(capacity, items);

    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
