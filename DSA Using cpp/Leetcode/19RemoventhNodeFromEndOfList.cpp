// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* temp = head;
//         int len = 0;
//         while(temp!=NULL) {
//             temp = temp->next;
//             len++;
//         }
//         //nth from end = (len - n + 1)th from start
//         if(len==n){
//             head = head->next;
//             return head;
//         }
//         int end = len - n + 1;
//         int idx = end - 1;
//         temp = head;
//         for(int i = 1;i<=idx-1;i++){
//             temp=temp->next;
//         }
//         temp->next = temp->next->next;
//         return head;
//     }

// };

// interviewer POV
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* fast = head;
//         ListNode* slow = head;
//         //traverse fast to (n+1) steps
//         for(int i = 1;i<=n+1;i++){
//             if(fast==NULL) return head->next;
//             fast = fast->next;
//         }
//         //mpve slow and fast at same pace
//         while(fast!=NULL){
//             slow = slow->next;
//             fast = fast->next;
//         }
//         //now thw slow is exactly at left of the node we want to delete
//         slow->next = slow->next->next;
//         return head;
//     }

// };