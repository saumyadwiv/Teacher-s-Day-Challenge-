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
    int maxDepth(TreeNode* root) {

        int ans=0;

        if(root==NULL){
            return ans;
        }

        int leftsubtree= maxDepth(root->left);

        int righsubtree= maxDepth(root->right);

        ans= max(leftsubtree, righsubtree)+1;

        return ans;  
        
    }
};
