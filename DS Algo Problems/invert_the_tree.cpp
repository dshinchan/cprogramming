//Given the root of a binary tree, invert the tree, and return its root.
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
    vector <int> fuc(TreeNode* root){
        vector <int> result;
        result.reserve(2);
        result[0]=0;
        result[1]=0;
        if(root==NULL)
            return 0;
        vector <int> x=fuc(root->left);
        vector <int> y=fuc(root->right);
        if(x+y>result[0])
            result[0]=x+y;
        if(x>y)
            result[1]=x+1;
        else
            result[1]=y+1;
    return result;
}
    bool isBalanced(TreeNode* root) {
        vector <int> array=fuc(root);
    if(array[0]>1)
    }
};
