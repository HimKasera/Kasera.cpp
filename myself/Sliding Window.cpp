#include <iostream>
#include <vector>
#include <algorithm>

int maxSum(std::vector<int>& arr, int k) {
    int max_sum = INT_MIN;
    for (size_t i = 0; i < arr.size() - k + 1; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++)
            current_sum += arr[i + j];
        max_sum = std::max(current_sum, max_sum);
    }
    return max_sum;
}

int main() {
    std::vector<int> arr = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    std::cout << maxSum(arr, k);
    return 0;
}
