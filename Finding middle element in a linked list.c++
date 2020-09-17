int getMiddle(Node *head)
{
   // Your code here
   int count = 0;
   Node* cur_node;
   cur_node = head;
   while (cur_node)
   {
       count = count +1;
       cur_node = cur_node->next;
   }
   cur_node = head;
   int n = 0;
   while (n!=count/2){
       n = n+1;
       cur_node = cur_node->next;
   }
