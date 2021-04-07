/*Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.*/


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
 
int global=0;
int maxDepth2(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int x=maxDepth2(root->left);
        int y=maxDepth2(root->right);
        cout<<x<<"\t"<<y<<"\n";
        global=x+y+1>global?x+y+1:global;
        return x>y?x+1:y+1;
   }
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        global=0;
                maxDepth2(root);
            
        return global==0?0:global-1;
    }
};
