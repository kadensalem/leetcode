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
    ListNode* middleNode(ListNode* head) {
        ListNode* head_temp = head;
        int count = 0;
        while(head) {
            count++;
            head = head->next;
        }
        for(int i = 0; i < count / 2; i++) {
            head_temp = head_temp->next;
        }
        return head_temp;
    }
};