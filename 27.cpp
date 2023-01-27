// https://leetcode.com/problems/concatenated-words/

/*
class Solution {
public:
    unordered_set<string> s;
    vector<string> findAllConcatenatedWordsInADict(vector<string> & words) {
        for(string & word: words) {
            s.insert(word);
        }
        vector<string> ans;
        for(string & word: words) {
            if(check(word, 0, 0)) {
                ans.push_back(word);
            }
        }
        return ans;
    }
    bool check(string & word, int idx, int count) {
        if(idx == word.size()) {
            if(count >= 2) {
                return true;
            }
            return false;
        }
        string store = "";
        for(int i = idx; i < word.size(); i++) {
            store += word[i];
            if(s.count(store) && check(word, i + 1, count + 1)) {
                return true;
            }
        }
        return false;
    }
};
*/