/*445. Add Two Numbers II

You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:
Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]

Example 2:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]

Example 3:
Input: l1 = [0], l2 = [0]
Output: [0]

*/

//code::-------------------------------------------------------------------------------------------


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
    ListNode* reverse(ListNode* head){
        ListNode* current = head->next;
        ListNode* prev = NULL;
        while(current!=NULL){
            if(prev == NULL) head->next = NULL;

            prev = current;
            current = current->next;
            prev->next = head;
            head = prev;
        }
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        l1=reverse(l1);
        l2=reverse(l2);
        int carry=0;
        
        while(l1!=NULL || l2!=NULL){
             int sum = carry;
             if(l1) sum = sum + l1->val;
             if(l2) sum = sum + l2->val;
            
            current->next = new ListNode(sum%10);
            carry = sum/10;
            current = current->next;
            
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        
        if(carry){
            current->next = new ListNode(carry);
        }
        
        return reverse(head->next);
        
    }
};
