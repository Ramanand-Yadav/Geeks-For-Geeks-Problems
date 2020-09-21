def getNthfromEnd(head,n):
    if head == None:
        return -1
        
    cur = head
    count = 0
    while cur:
        count = count + 1
        cur = cur.next
    if n>count:
        return -1
        
    m = 0
    curr = head
    while m<(count -n):
        curr = curr.next
        m= m+1
    return curr.data
