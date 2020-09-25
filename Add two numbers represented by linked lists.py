def addLists(first, second):
    # code here
    # return head of sum list
    curr1 = first
    curr2 = second
    sum1 = 0
    sum2 = 0
    while curr1:
        sum1 = sum1*10 + curr1.data
        curr1 = curr1.next
    while curr2:
        sum2 = sum2*10 + curr2.data
        curr2 = curr2.next
    total = sum1 + sum2
    rem1 = total%10
    total = total//10
    head = Node(rem1)
    while total:
        rem = total%10
        m = Node(rem)
        m.next = head
        head = m
        total = total//10
    
    return head
    
