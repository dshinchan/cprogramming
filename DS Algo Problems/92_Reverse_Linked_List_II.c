/*92. Reverse Linked List II

Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
Example 2:

Input: head = [5], left = 1, right = 1
Output: [5]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
*/

//code::

struct ListNode* reverse(struct ListNode* head){
    struct ListNode* prev=NULL;
    struct ListNode* current=head->next;
     while(current!=NULL){
        if(prev == NULL)
            head->next = NULL;

        prev = current;
        current = current->next;
        prev->next= head;
        head = prev;
    }    
    return head;
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
        if(head == NULL ||head->next==NULL) return head;
        if(right == left) return head;
        int count = 1;
        struct ListNode* prev;
        struct ListNode* temp = head;
        while(count!=right && temp!=NULL){
            if((count+1) == left) prev = temp; 
            
            temp = temp->next;
            count++;
        }
        struct ListNode* x;
        struct ListNode* save=temp->next;
        if(left == 1){
            if(temp->next==NULL){
                return reverse(head);
            }else{
                x=head;
                temp->next=NULL;
                head = reverse(x);
                x->next = save;
                return head;
            }
        }else{ 
            x=prev->next;
            prev->next = NULL;
            temp->next=NULL;
            struct ListNode* y = reverse(x);

            prev->next = y;
            x->next = save;
            return head;
        }

        return head;
        
}
