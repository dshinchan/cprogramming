/*2. Add Two Numbers


You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]                      Output: [7,0,8]                                   Explanation: 342 + 465 = 807.

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
 
 code */
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> x; 
        int i =0;
        while(l1->next!=NULL || l2->next!=NULL){
            x.push_back(l1->val+l2->val);
            //cout<<x[i]<<"\t";
            i++;
            if(l1->next==NULL){
                l1->next = new ListNode(0);
            }
           if(l2->next==NULL){
                l2->next = new ListNode(0);
            }
            
            l1=l1->next;
            l2=l2->next;
        }
        x.push_back(l1->val+l2->val);
        //cout<<x[i]<<"\t";
        i=0;
        while(i!=x.size()){
            //cout<<x[i]<<"\t";
            if(x[i]/10!=0){
               if(i==x.size()-1){
                   x.push_back(x[i]/10);
                   x[i]=x[i]%10;
                   break;
               }
                  x[i+1]=x[i+1]+x[i]/10;
                    x[i]=x[i]%10;
                cout<<x[i]<<"\t";
  
                
            } 
            i++;
        }
        i=0;
        ListNode* head = NULL;
        ListNode* cur = NULL;
        
        while(i!=x.size()){
            
            ListNode* node = new ListNode(x[i++]);
            if(!head) { head = node; cur = node; }
            else { cur->next = node; cur = node; }
        }
        return head;
    }
};
