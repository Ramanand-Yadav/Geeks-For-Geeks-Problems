def findMid(head):
    # Code here
    # return the value stored in the middle node
    count = 0
    l = []
    cur_node = head
    while cur_node:
        count = count+1
        l.append(cur_node.data)
        cur_node = cur_node.next
    n = len(l)//2
    return (l[n])
