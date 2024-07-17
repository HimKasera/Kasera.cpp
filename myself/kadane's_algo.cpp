#include <iostream>
#include <vector>

int kadaneAlgorithm(const std::vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> nums(n);

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int maxSubarraySum = kadaneAlgorithm(nums);
    std::cout << "Maximum subarray sum: " << maxSubarraySum << std::endl;

    return 0;
}
