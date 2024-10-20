// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int length=0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             temp=temp->next;
//             length++;

//         }
//         ListNode* midval = head;
//         for(int i = 1;i<=length/2;i++){
//             midval = midval->next;
//         }
//         return midval;
//     }
// }