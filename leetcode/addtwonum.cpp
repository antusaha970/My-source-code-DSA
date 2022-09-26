// #include <iostream>
// using namespace std;

// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

// void Traversal(struct ListNode *head)
// {
//     struct ListNode *ptr = head;
//     do
//     {
//         cout << ptr->val << " ";
//         ptr = ptr->next;
//     } while (ptr != head);
//     cout << endl;
// }


// struct ListNode*inserttail(struct ListNode*head,int val){
//     struct ListNode*ptr = (struct ListNode*)malloc(sizeof(struct ListNode));
//     ptr->val = val;
//     struct ListNode*p = head;
//     while (p->next!=NULL)
//     {
//         p = p->next;
//     }
    
//     ptr->next = NULL;
//     p->next = ptr;
//     return head;
// }

// struct ListNode*reverseLL(struct ListNode*head){
//     struct ListNode *prevPtr = NULL;
//     struct ListNode*currentPtr = head;
//     struct ListNode*nPtr;

//     while (currentPtr!=NULL)
//     {
//         nPtr = currentPtr->next;
//         currentPtr->next = prevPtr;
//         prevPtr = currentPtr;
//         currentPtr = nPtr;
//     }
//     free(nPtr);
//     free(currentPtr);
//     return prevPtr;
// }


// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
//     l1 = reverseLL(l1);
//     l2 = reverseLL(l2);

//     struct ListNode *ans;
//     ans = addTl(l1,l2);
//     ans = reverseLL(ans);
//     return ans; 
// }

// int main()
// {

//     struct ListNode *head;
//     struct ListNode *f1;
//     struct ListNode *f2;
//     struct ListNode *f3;
//     struct ListNode *f4;

//     head = (struct ListNode *)malloc(sizeof(struct ListNode));
//     f1 = (struct ListNode *)malloc(sizeof(struct ListNode));
//     f2 = (struct ListNode *)malloc(sizeof(struct ListNode));
//     f3 = (struct ListNode *)malloc(sizeof(struct ListNode));
//     f4 = (struct ListNode *)malloc(sizeof(struct ListNode));

//     head->val = 1;
//     head->next = f1;

//     f1->val = 2;
//     f1->next = f2;

//     f2->val = 3;
//     f2->next = f3;

//     f3->val = 4;
//     f3->next = NULL;
//     head = reverseLL(head);
//     Traversal(head);

//     return 0;
// }