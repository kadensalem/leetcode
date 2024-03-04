/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 1;
    
    void check(TreeNode* node, int max_val) {
        if(!node)
            return;
        if(node->val >= max_val)
            ans++;
        check(node->left, max(max_val, node->val));
        check(node->right, max(max_val, node->val));
    }
    
    int goodNodes(TreeNode* root) {
        check(root->left, root->val);
        check(root->right, root->val);
        return ans;
    }
    

};