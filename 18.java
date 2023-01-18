// https://leetcode.com/problems/maximum-sum-circular-subarray/

/*
 class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int totalSum = 0;
        int currMaxSum = 0;
        int currMinSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int minSum = Integer.MAX_VALUE;
        for (int x : nums) {
            totalSum += x;
            currMaxSum = Math.max(currMaxSum + x, x);
            currMinSum = Math.min(currMinSum + x, x);
            maxSum = Math.max(maxSum, currMaxSum);
            minSum = Math.min(minSum, currMinSum);
        }
        return maxSum < 0 ? maxSum : Math.max(maxSum, totalSum - minSum);
    }
}
 */