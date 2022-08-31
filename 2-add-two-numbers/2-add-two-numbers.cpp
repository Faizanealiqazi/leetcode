

/**  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };**/

class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {

        ListNode* temp3 = new ListNode(0);
        ListNode* Sum = temp3;
        int carry = 0;
        while(l1!=NULL && l2!=NULL)
        {
            int value = l1->val+l2->val+carry;
            if (value > 9)
            {
                Sum->next= new ListNode(value%10);
                carry = 1;
            }
            else
            {
                Sum->next= new ListNode(value%10);
                carry=0;
            }
           
            l1=l1->next;
            l2=l2->next;
            
            Sum=Sum->next;
        }
        if(l1!=NULL||l2!=NULL||carry!=0)
        {
            while(l1!=NULL)
            {
                int value = l1->val+carry;
                if (value > 9)
                {
                    Sum->next= new ListNode(value%10);
                    carry = 1;
                }
                else
                {
                    Sum->next= new ListNode(value%10);
                    carry=0;
                }
                l1=l1->next;
                Sum=Sum->next;
            }
            while(l2!=NULL)
            {
                int value = l2->val+carry;
                if (value > 9)
                {
                    Sum->next= new ListNode(value%10);
                    carry = 1;
                }
                else
                {
                    Sum->next= new ListNode(value%10);
                    carry=0;
                }
                l2=l2->next;
                Sum=Sum->next;
            }
            if(carry!=0)
            {
                Sum->next= new ListNode(1);
                carry=0;
            }
        }
        return temp3->next;
    }
};