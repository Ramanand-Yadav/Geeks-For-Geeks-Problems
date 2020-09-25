struct Node* reverseList(struct Node *head)
{
    Node *prev,*curr,*nxt;
    prev = NULL;
    curr = head;
    while (curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
    // code here
    // return head of reversed list
}
