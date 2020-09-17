int GetNth(struct node* head, int index){
    int count = 0;
    node* cur_node;
    cur_node = head;
    while (count != index-1)
    {
        count = count + 1;
        cur_node = cur_node->next;
    }
    return cur_node->data;
    
  // Code here
}
