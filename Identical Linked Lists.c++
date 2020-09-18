bool areIdentical(struct Node *head1, struct Node *head2)
{
    int count1 = 0;
    int count2 = 0;
    Node *curr1;
    curr1 = head1;
    Node *curr2;
    curr2 = head2;
    while (curr1)
    {
        count1 = count1 +1;
        curr1 = curr1->next;
    }
    while (curr2)
    {
        count2 = count2 +1;
        curr2 = curr2->next;
    }
    if (count1 != count2)
    {
        return false;
    }
    curr1 = head1;
    curr2 = head2;
    while (curr1)
    {
        if (curr1->data != curr2->data)
        {
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
    // Code here
}
