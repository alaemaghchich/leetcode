/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode **current;
    struct ListNode *tempo;

    current = &head;
    while (*current)
    {
        if ((*current)->val == val)
        {
            tempo = (*current)->next;
            free(*current);
            *current = tempo;
        }
        else
            current = &(*current)->next;
    }
    return (head);
}