/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
  struct ListNode *temp1=headA;struct ListNode *temp2=headB;
    int xcount=0,ycount=0,z;
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        xcount++;
        }
       while(temp2!=NULL)
        {
               temp2=temp2->next;
                ycount++;
       }
        if(xcount>ycount){
            z=xcount-ycount;
            while(z!=0)
            {
                headA=headA->next;
                z--;
            }
        }
        else{
            z=ycount-xcount;
            while(z!=0)
            {
                headB=headB->next;
                z--;
            }
        }
        if(headA==headB)
            return headA;
        while(headA!=headB)
        {
          headA=headA->next;
           headB=headB->next;
             if(headA==headB)
                return headA;
        }
        return NULL;
}
