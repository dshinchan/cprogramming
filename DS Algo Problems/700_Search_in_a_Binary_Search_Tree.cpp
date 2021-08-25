/*700. Search in a Binary Search Tree
image.png
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
 
 
*/

//code::
 
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){
            return 0;
        }
        if(root->val == val){
            return root;
        }
        if(root->val>val){
            return searchBST(root->left, val);
        }
        return searchBST(root->right, val);
    }
};


