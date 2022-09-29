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
#include <bits/stdc++.h>
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode * temp  = head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        temp = head;
        if(count>n)
        {
             for(int i =0;i<count;i++)
             {
                 
                 if(i==count-n-1)
                 {
                     ListNode * temp1 = temp->next;
                     //cout<<temp->val;
                     temp->next = temp->next->next;
                     i++;
                     //free(temp1) ;
                 }
                 else
                 {
                     temp= temp->next;
                 }
                 
             }
        }
        else if (count==n)
        {
            return head->next;
        }
        
        return head;

        
    }
};