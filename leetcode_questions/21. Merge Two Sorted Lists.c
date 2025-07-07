/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next = NULL;
    struct ListNode* current = dummy;

    while(list1 != NULL && list2 != NULL) {
        if(list1->val < list2->val)
        {
          current->next = list1;
          list1 = list1->next;
        } 
        else
        {
          current->next = list2;
          list2 = list2->next;
        }
        current = current->next;
    }
    if(list1 != NULL) current->next = list1;
    else current->next = list2;

    struct ListNode* result = dummy->next;
    free(dummy);
    return result;
}
