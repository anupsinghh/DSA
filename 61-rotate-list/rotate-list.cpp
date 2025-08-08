class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find the length
        int len = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            len++;
        }

        // Step 2: Connect tail to head (make it circular)
        tail->next = head;

        // Step 3: Find new tail (len - k % len - 1 steps from head)
        k = k % len;
        int stepsToNewTail = len - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // Step 4: Break the circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
