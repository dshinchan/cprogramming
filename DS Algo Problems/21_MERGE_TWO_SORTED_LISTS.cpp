/* 21. MERGE TWO SORTED LISTS:

Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

Example 1:

Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]*/
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
 
 
 
 
 
 
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* curr = NULL;
        ListNode* x=NULL;
        while(l1 || l2){
         
            if(!l2 || ( l1 && l1->val <= l2->val) ){
                if(x==NULL){
                    x=l1;
                } 
                curr=l1;
                l1=l1->next;
            }else{
                    if(x==NULL){
                        x=l2;
                    } 
                    curr=l2;
                    l2=l2->next;

            }
            
            if(head!=NULL) head->next = curr;
            head=curr;
        }
        return x;
    }
};
