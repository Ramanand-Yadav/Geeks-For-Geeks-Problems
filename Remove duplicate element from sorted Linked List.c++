// root: head node
Node *removeDuplicates(Node *root)
{
    Node *prev,*curr;
    prev = root;
    curr = root->next;
    while(curr){
        if(prev->data==curr->data){
            curr = curr->next;
            prev->next = curr;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
        
    }
    return root;
 // your code goes here
}
