def isCircular(head):
    # Code here
    if not head:
        return 1
    curr = head
    while (head != curr.next):
        if not curr.next:
            return 0
        curr = curr.next
    return 1
