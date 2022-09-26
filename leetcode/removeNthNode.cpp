#include <iostream>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node) {
    struct ListNode*ptr = node->next;
    node->val = ptr->val;
    node->next = ptr->next;
    free(ptr);
    
}

int main()
{

    return 0;
}