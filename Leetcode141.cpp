// applying flods and warshell's cycle detection-->>
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (!head || !head->next)
            return NULL;

        ListNode *slow = head, *fast = head;

        // Step 1: detect cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // cycle detected

                // Step 2: find start of cycle
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // cycle start
            }
        }

        return NULL; // no cycle
    }
};
