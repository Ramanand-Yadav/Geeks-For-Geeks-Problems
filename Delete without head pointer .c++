void deleteNode(Node *node)
{
    Node *p = node;
    while(p->next!=NULL){
        p->data = p->next->data;
        p = p->next;
    }
    p = node;
    while(p->next->next!=NULL){
        p = p->next;
    }
    p->next = NULL;
   // Your code here
}
