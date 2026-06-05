class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         long long Sum = 0;
        for (int i = 0; i < k; i++) {
            Sum += nums[i];
        }
        
        long long maxSum = Sum;
        
        for (int i = k; i < nums.size(); i++) {
            Sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, Sum);
        }
        
        return (double)maxSum / k;
    }
};
