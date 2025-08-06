class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head) return nullptr;

        vector<int> vals;
        ListNode* temp = head;

        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

      
        sort(vals.begin(), vals.end());

        temp = head;
        for (int val : vals) {
            temp->val = val;
            temp = temp->next;
        }

        return head;
    }
};
