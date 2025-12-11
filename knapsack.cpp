#include <iostream>
#include <vector>
#include <algorithm> // For std::max

int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity) {
    int n = values.size();
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));
    for (int i = 1; i <= n; ++i) { 
        for (int w = 1; w <= capacity; ++w) { 
            int item_weight = weights[i-1];
            int item_value = values[i-1];
            if (item_weight > w) {
                dp[i][w] = dp[i-1][w];
            } else {
                int dont_include_item = dp[i-1][w];
                int include_item = item_value + dp[i-1][w - item_weight];
                dp[i][w] = std::max(dont_include_item, include_item);
            }
        }
    }
    return dp[n][capacity];
}
int main() {
    std::vector<int> item_values = {10, 7, 8};   // Tent, Water, Food
    std::vector<int> item_weights = {5, 3, 4};  // 5kg, 3kg, 4kg
    int knapsack_capacity = 7;                   // Max 7 kg

    int max_value = knapsack(item_weights, item_values, knapsack_capacity);

    std::cout << "Items to choose from:" << std::endl;
    std::cout << "  - Tent:  Weight=" << item_weights[0] << "kg, Value=" << item_values[0] << std::endl;
    std::cout << "  - Water: Weight=" << item_weights[1] << "kg, Value=" << item_values[1] << std::endl;
    std::cout << "  - Food:  Weight=" << item_weights[2] << "kg, Value=" << item_values[2] << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "Knapsack Capacity: " << knapsack_capacity << "kg" << std::endl;
    std::cout << "Maximum value possible: " << max_value << std::endl; // Expected output: 15

    return 0;
}