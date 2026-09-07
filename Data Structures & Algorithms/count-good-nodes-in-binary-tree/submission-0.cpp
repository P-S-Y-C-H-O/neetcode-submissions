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
    int good(TreeNode* root,int curr_max){
        if(!root)return 0;
        int count=0;
        if(root->val>=curr_max)count=1;
        int left=good(root->left,max(curr_max,root->val));
        int right=good(root->right,max(curr_max,root->val));
        return count+left+right;
    }
    int goodNodes(TreeNode* root) {
        return good(root,root->val);
    }
};
