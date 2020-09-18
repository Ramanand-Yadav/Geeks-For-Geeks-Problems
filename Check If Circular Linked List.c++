bool isCircular(Node *head)
{
    if (head == 0){
        return 1;
    }
    Node *curr;
    curr = head;
    while (head != curr->next)
    {
        if (curr->next == NULL){
            return 0;
        }
        curr = curr->next;
    }
    return 1;
   // Your code here
}
