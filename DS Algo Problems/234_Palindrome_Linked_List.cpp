//234. Palindrome Linked List 

/*Given the head of a singly linked list, return true if it is a palindrome.

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
 
//CODE:: 
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)  return true;
        vector<int> help;
        while(head!=NULL){
            help.push_back(head->val);
            if(head->next!=NULL) head=head->next;
            else head=NULL;
        }
        
        if(help.size()==1) return true;
        
        int i=0; int j=help.size()-1;
        while(i<j){
            if(help[i]!=help[j]) return false;
        
            i++; j--;
        }
        return true;
    }
};

