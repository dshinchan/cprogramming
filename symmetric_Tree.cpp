/*Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

 

Example 1:

Input: root = [1,2,2,3,4,4,3]
Output: true

Example 2:

Input: root = [1,2,2,null,3,null,3]
Output: false

 

Constraints:

    The number of nodes in the tree is in the range [1, 1000].
    -100 <= Node.val <= 100*//*

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
bool help(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        else if (p==NULL || q==NULL)
            return false;
        else {
            bool left = true;
            bool right  = false;
            if (p->val == q->val) {
              left = help(p->left, q->right);
              right= help(p->right,q->left);
              if(left && right){
                  return true;
              } else {
                  return false;
              }
            }
            else
                return false;
        }

}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool result;
        if(root==NULL)
            return true;
        else{
            if(root->left==NULL && root->right==NULL)
                return true;
            else{
                if(root->left==NULL || root->right==NULL)
                {return false;}
                else{
                    if(root->left->val==root->right->val){
                         result=help(root->left,root->right);
                    }else{
                        return false;}
                  }
               
        }
        return result;
      }
};


