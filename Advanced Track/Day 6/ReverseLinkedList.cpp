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
    ListNode* reverseList(ListNode* head) {
        
        //using recursion

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* smallhead= reverseList(head->next); //gives us teh head of the reversed ll from 2nd node

        //reconnect the first node
        head->next->next=head;
        head->next=NULL;

        return smallhead;


        // ListNode* prev=NULL;
        // ListNode* curr=head;

        // while(curr!=NULL){
        //     ListNode* forward=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=forward;
        // }
        // return prev;

    }
};
