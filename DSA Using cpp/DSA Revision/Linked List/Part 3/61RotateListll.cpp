// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {

//         if(head==NULL || head->next==NULL) return head;
//         ListNode* temp = head;
//         ListNode* tail = NULL;
//         int size = 0;
//         while(temp!=NULL){
//             if(temp->next==NULL) tail = temp;
//             size++;
//             temp = temp->next;
//         }
//         k = k % size;
        
//         temp = head;
//         for(int i = 1;i<size - k;i++){
//             temp = temp->next;
//         }
        
//         tail->next = head;
//         head = temp->next ;
//         temp->next = NULL;

//         return head;
//     }
  
// };