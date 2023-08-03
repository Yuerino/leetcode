/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow, *fast;
        slow = fast = head;

        do {
            if (slow != nullptr) {
                slow = slow->next;
            }
            if (fast != nullptr) {
                fast = fast->next;
            }
            if (fast != nullptr) {
                fast = fast->next;
            }
        } while (slow != fast);

        return fast != nullptr;
    }
};
