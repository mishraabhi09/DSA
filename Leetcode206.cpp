class Solution {
public:
    ListNode* reverseList(ListNode* head) {

    // if head or head->next is not there
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    // first make PREV pointer, pointing to NULL
    // make curr as the head
    ListNode* prev = NULL;
    ListNode* curr = head;
    

    // make the forward node to current ka next
    // and make current ka next to prev which is null
    while(curr!=NULL)
    {
       ListNode* fwrd = curr->next;
       curr->next = prev;
       prev = curr;
       curr = fwrd;
    }

    // prev is the new head of the reverse linked list
    return prev;