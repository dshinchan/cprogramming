/*876. Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//code:

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* temp1;
    struct ListNode* temp2;
    int count1=-1,count2=0;
    temp1 = head;
    while(head!=NULL){
        head=head->next;
        count1++;
    }
    if(count1%2==0) count1=count1/2;
    else count1 = (count1/2)+1;
    head = temp1;
    while(count1!=count2){
        if(head->next!= NULL)
            head = head->next;
        count2++;
    }
    return head;
}
