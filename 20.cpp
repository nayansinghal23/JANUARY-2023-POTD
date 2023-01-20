// https://leetcode.com/problems/non-decreasing-subsequences/

/*
class Solution {
public:
    void solve(vector<int> & nums, int i, set<vector<int> > & s, vector<int> & store) {
        if(i == nums.size()) {
            if(store.size() > 1) {
                s.insert(store);
            }
            return;
        }
        if(store.size() == 0 or store[store.size() - 1] <= nums[i]) {
            store.push_back(nums[i]);
            solve(nums, i + 1, s, store);
            store.pop_back();
        }
        solve(nums, i + 1, s, store);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int> > s;
        vector<int> store;
        solve(nums, 0, s, store);
        vector<vector<int> > ans;
        for(vector<int> x : s) {
            ans.push_back(x);
        }
        return ans;
    }
};
*/