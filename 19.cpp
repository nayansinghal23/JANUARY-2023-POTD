// https://leetcode.com/problems/subarray-sums-divisible-by-k/

/*
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        um[0] = 1;
        int sum = 0, ans = 0, rem = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            rem = sum % k;
            if(rem < 0) {
                rem += k;
            }
            if(um.find(rem) != um.end()) {
                ans += um[rem];
            }
            um[rem]++;
        }
        return ans;
    }
};
*/