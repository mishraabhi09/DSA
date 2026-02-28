class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // steps->> 1st approach
        // -->> then reverse the whole list
        // -->> after this,from starting
        // -->> again reverse the list until k
        // -->> reverse the remaining list
        // -->> at last Add both the list

        // 2nd appraoch-->>
        // if the LL is empty OR having only 1 node
        // or k is 0 , then return head
        if(!head || !head->next || k == 0)
        {
            return head;
        }

        // Repeat the rotation process k times-->>
        for(int i = 0; i < k ; i++)
        {
           ListNode* curr = head;
           ListNode* prev = NULL;

           //traverse the list till last
           while(curr && curr->next)
           {
             prev = curr;
             curr = curr->next;
           }

           // seperate the last node and place it at the beginning
           prev->next = NULL;
           curr->next = head;
           head = curr;
        }

        // return the rotated head-->>
        return head;
    }
};