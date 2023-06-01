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
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        ListNode *headA = A;

        while (B != nullptr) {
            A = headA;
            while (A != nullptr) {
                if (A == B) return A;
                A = A->next;
            }
            B = B->next;
        }

        return nullptr;
    }
};
