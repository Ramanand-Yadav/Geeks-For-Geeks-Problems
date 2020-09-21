bool isPalindrome(Node *head)
{
    int number =0;
    int reverseNum = 0;
    Node *cur;
    cur = head;
    int multi = 1;
    while (cur){
        number = number*10+cur->data;
        reverseNum = cur->data * multi + reverseNum;
        
        cur = cur->next;
        multi = multi*10;
    }
    return number == reverseNum;
    //Your code here
}
