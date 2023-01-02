// https://leetcode.com/problems/detect-capital/

/*
 class Solution {
    public boolean detectCapitalUse(String word) {
        int caps = 0;
        for(int i = 0; i < word.length(); i++) {
            if(word.charAt(i) >= 65 && word.charAt(i) <= 90) {
                caps++;
            }
        }
        if(caps == word.length() || caps == 0) {
            return true;
        }
        if(caps == 1) {
            if(word.charAt(0) >= 65 && word.charAt(0) <= 90) {
                return true;
            }
            return false;
        }
        return false;
    }
}
 */