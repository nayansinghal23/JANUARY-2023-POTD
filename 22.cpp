// https://leetcode.com/problems/palindrome-partitioning/

/*
class Solution {
public:
    bool isPalindrome(string str) {
        if(str.length() == 0) {
            return false;
        }
        if(str.length() == 1) {
            return true;
        }
        for(int i = 0; i < str.length() / 2; i++) {
            if(str[i] != str[str.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    void f(vector<vector<string> > & ans, vector<string> & ds, string s, int i) {
        if(i == s.size()) {
            ans.push_back(ds);
            return;
        }
        for(int idx = i; idx < s.size(); idx++) {
            string str = s.substr(i, idx - i + 1);
            if(isPalindrome(str)) {
                ds.push_back(str);
                f(ans, ds, s, idx + 1);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string> > ans;
        vector<string> ds;
        f(ans, ds, s, 0);
        return ans;
    }
};
*/