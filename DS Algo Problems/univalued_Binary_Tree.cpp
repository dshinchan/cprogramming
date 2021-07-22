/*A binary tree is univalued if every node in the tree has the same value.

Return true if and only if the given tree is univalued.

 

Example 1:

Input: [1,1,1,1,1,null,1]
Output: true

Example 2:

Input: [2,2,2,5,2]
Output: false

 

Note:

    The number of nodes in the given tree will be in the range [1, 100].
    Each node's value will be an integer in the range [0, 99]. */


code:

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
        result[0]=root->val;
        result[1]=1;
        //result[1]=1;
        if(root->left==NULL && root->right==NULL){
            return result;
        }
       // cout<< "before call"<< result[0];
        if(root->left!=NULL){
             vector <int> X=fuc(root->left);
            if(result[0]==X[0] && X[1]!=0){
                //cout<<"left in"<< result[0] <<"\t"<<X[0];
                 
            } else{
                //cout<<"left out";
                result[1]=0;
            }
        }
         if(result[1]!=0 && root->right!=NULL){             
           vector <int> Y=fuc(root->right);
            if(result[0]==Y[0] && Y[1]!=0){
               // cout<<"right in";
                
            } else{
               // cout<<"right out";
                result[1]=0;
            }         
        }
        return result;
    }
    
    bool isUnivalTree(TreeNode* root) {
       vector <int> array=fuc(root);
        //cout<<array[1];
       return array[1]==1;
    }
};

