class Solution {

private:

    // this reverse function is not needed-->>
    ListNode* reverselist(ListNode * head)
    {
        if(head==NULL || head->next == NULL)
        {
            return head;
        }

        ListNode* curr = head;
        ListNode* front= NULL;
        ListNode* prev = NULL;

        while(curr!=NULL)
        {
            front  = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        return prev;
    }

    void insertAtTail(ListNode* &head , ListNode* &tail , int val)
    {
        ListNode* newNode = new ListNode(val);
        // if list is empty-->>
        if(head==NULL)
        {
           head = newNode;
           tail = newNode;
           return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    ListNode* add(ListNode* firstlist, ListNode* secondlist)
    {

       //initialise a carry bit--
       int carry  = 0;
       //initializing head and tail of combined LL as NULL-->>
       ListNode* ansTail = NULL;
       ListNode* ansHead = NULL;

       
       while(firstlist != NULL || secondlist != NULL || carry !=0 )
       {

           int val1 = 0;
           if(firstlist!=NULL)
           {
             val1 = firstlist->val;
           }

           int val2 = 0;
           if(secondlist!=NULL)
           {
             val2 = secondlist->val;
           }

           // sum of nodes of both the lists
           int sum  = carry + val1 + val2;

           // if sum is 807 , take the modulo, find the last digit-->>
           int digit = (sum%10);

           //push that head & tail & digit in LL
           insertAtTail(ansHead , ansTail , digit);

           carry = (sum/10);

           if(firstlist != NULL)
           {
              firstlist = firstlist->next;
           }
           if(secondlist != NULL)
           {
              secondlist = secondlist->next;
           }

        }

       return ansHead;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        // reverse both the linked list-->>
        // ListNode* firstlist = reverselist(l1);
        // ListNode* secondlist = reverselist(l2);

        // add both linked list-->>
        ListNode* ans = add(l1 , l2);

        //reverse the final linked list-->>
        // ans = reverselist(ans);

        // return final LL-->>
        return ans;

    }
};