/*144. BINARY TREE PREORDER TRAVERSAL

Given The Root Of A Binary Tree, Return The Preorder Traversal Of Its Nodes' Values.
*/


/**
 * Definition For A Binary Tree Node.
 * Struct Treenode {
 *     Int Val;
 *     Treenode *Left;
 *     Treenode *Right;
 *     Treenode() : Val(0), Left(Nullptr), Right(Nullptr) {}
 *     Treenode(Int X) : Val(X), Left(Nullptr), Right(Nullptr) {}
 *     Treenode(Int X, Treenode *Left, Treenode *Right) : Val(X), Left(Left), Right(Right) {}
 * };
 */
 code:
 
class Solution {
public:
    void help(vector<int>& ans,TreeNode* root){
        if(root == NULL)
            return ;
        ans.push_back(root->val);
        cout<<root->val<<"\n";
        help(ans,root->left);
        help(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
         help(ans,root);
         return ans;
    }
};
