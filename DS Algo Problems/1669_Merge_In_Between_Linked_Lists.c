/*1669. Merge In Between Linked Lists

You are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

Build the result list and return its head.

 

Example 1:

Input: list1 = [0,1,2,3,4,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [0,1,2,1000000,1000001,1000002,5]

Example 2:

Input: list1 = [0,1,2,3,4,5,6], a = 2, b = 5, list2 = [1000000,1000001,1000002,1000003,1000004]
Output: [0,1,1000000,1000001,1000002,1000003,1000004,6]


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
*/

//code::

struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
        int count =0;
        struct ListNode* prev;
        struct ListNode* temp = list1;
        while(count!=b && temp!=NULL){
            if((count+1) == a) prev = temp; 
            
            temp = temp->next;
            count++;
        }
    
        struct ListNode* save = temp->next;
        prev->next = list2;
        
        while(list2->next!=NULL){
            list2 = list2->next;
        }
        list2->next=save;
        return list1;
    
}
