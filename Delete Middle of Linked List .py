Node* deleteMid(Node* head)
{
    if (head == NULL || head->next==NULL){
        return head;
    }
    int count=0;
    Node *curr = head;
    while (curr){
        count = count + 1;
        curr = curr->next;
    }
    if (count == 2){
        head->next = NULL;
        return head;
    }
    
    count = count/2;
    
    curr = head;
    Node* prev = head;
    while (count){
        prev = curr;
        curr = curr->next;
        count--;
    }
    curr = curr->next;
    prev->next = curr;
    return head;
    // Your Code Here
}
