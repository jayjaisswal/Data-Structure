// class Solution
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {
//         ListNode* tempA = headA;
//         ListNode* tempB = headB;
//         int lenA=0;
//         int lenB=0;
//         while(tempA!=NULL)
//         {
//             tempA=tempA->next;
//             lenA++;
//         }

//         while(tempB!=NULL)
//         {
//             tempB=tempB->next;
//             lenB++;
//         }
//         // we have to traverse upto |lenA-lenB|
//         tempA = headA;
//         tempB = headB;
//         if(lenA>lenB)
//         {
//         for(int i = 1;i<=lenA-lenB;i++)
//             tempA=tempA->next;
//         }
//         if(lenB>lenA){
//             for(int i = 1;i<=lenB-lenA;i++)
//                 tempB=tempB->next;
//         }
//         // Move both pointers until they meet
//         while (tempA != NULL && tempB != NULL) {
//            if (tempA == tempB) {
//                 return tempA;
//             }
//             tempA = tempA->next;
//             tempB = tempB->next;

//         }

//         return NULL;  // No intersection found
//     }
// }