class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = reverseList(slow->next);
        ListNode* firstHalf = head;
        ListNode* curr = secondHalf;
        bool result = true;
        while (curr) {
            if (firstHalf->val != curr->val) {
                result = false;
                break;
            }
            firstHalf = firstHalf->next;
            curr = curr->next;
        }
        reverseList(secondHalf);
        return result;
    }
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
