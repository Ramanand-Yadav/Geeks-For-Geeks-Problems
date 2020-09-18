void display(Node *head)
{
    Node *cur;
    cur = head;
    while(cur)
    {
        cout<<cur->data<<" ";
        cur = cur->next;
    }
  //your code goes here
}
