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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* Head = new ListNode(0);
        ListNode* List3 = Head;
        while(list1!=NULL&&list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                List3->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else
            {
                List3->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            
            
            List3 = List3->next;
        }
        while(list1!=NULL||list2!=NULL)
        {
           
            if (list1!=NULL)
            {
                List3->next = new ListNode(list1->val); 
                list1 = list1->next;
            }
            if (list2!=NULL)   
            {   List3->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            List3 = List3->next;
            
            
            
            
        }
        return Head->next;
    }
};