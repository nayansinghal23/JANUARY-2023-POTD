// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

/*
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> um;
        for(int i = 0; i < tasks.size(); i++) {
            um[tasks[i]]++;
        }
        int ans = 0;
        for(auto itr : um) {
            if(itr.second < 2) {
                return -1;
            }
            int q = itr.second / 3;
            int r = itr.second % 3;
            ans += q;
            if(r == 1 or r == 2) {
                ans++;
            }
        }
        return ans;
    }
};
*/