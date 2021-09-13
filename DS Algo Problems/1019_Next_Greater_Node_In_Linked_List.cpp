/*1019. Next Greater Node In Linked List

You are given the head of a linked list with n nodes.

For each node in the list, find the value of the next greater node. That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.

Return an integer array answer where answer[i] is the value of the next greater node of the ith node (1-indexed). If the ith node does not have a next greater node, set answer[i] = 0.

 

Example 1:
Input: head = [2,1,5]
Output: [5,5,0]

Example 2:
Input: head = [2,7,4,3,5]
Output: [7,0,5,5,0]

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
 
*/ 

//code::

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> help;
        ListNode* temp = head;
        ListNode* prev = temp->next;
        while(temp->next!=NULL){
            if(prev == NULL){
                     help.push_back(0);
                     temp = temp->next;
                     prev = temp->next;
            }else{
                if(prev->val > temp->val){
                    help.push_back(prev->val);
                    temp = temp->next;
                    prev = temp->next;
                }else{
                    prev = prev->next;
                }
            }
        }
        help.push_back(0);
        return help;
    }
};
