// https://leetcode.com/problems/same-tree/

/*
class Solution {
    public boolean solve(TreeNode p, TreeNode q) {
        if(p == null && q == null) {
            return true;
        }
        if((p == null && q != null) || (p != null && q == null)) {
            return false;
        }
        if(p.val != q.val) {
            return false;
        }
        boolean l = solve(p.left, q.left);
        boolean r = solve(p.right, q.right);
        return l && r;
    }
    public boolean isSameTree(TreeNode p, TreeNode q) {
        return solve(p, q);
    }
}
 */