// https://leetcode.com/problems/restore-ip-addresses/

/*
class Solution {
public:
    void f(int i, int n, string s, vector<string> & ans, string ch, int dots) {
        if(i > n) {
            return;
        }
        if(dots == 4) {
            if(i < n) {
                return;
            }
            ch.pop_back();
            ans.push_back(ch);
            return;
        }
        f(i + 1, n, s, ans, ch + s[i] + ".", dots + 1);
        if(s[i] != '0') {
            f(i + 2, n, s, ans, ch + s[i] + s[i + 1] + ".", dots + 1);
        }
        if(i + 2 < n && s[i] != '0') {
            string add = "";
            for(int idx = i; idx <= i + 2; idx++) {
                add += s[idx];
            }
            if(stoi(add) <= 255) {
                f(i + 3, n, s, ans, ch + add + ".", dots + 1);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        int n = s.length();
        vector<string> ans;
        if(n < 4) {
            return ans;
        }
        string ch = "";
        f(0, n, s, ans, ch, 0);
        return ans;
    }
};
*/