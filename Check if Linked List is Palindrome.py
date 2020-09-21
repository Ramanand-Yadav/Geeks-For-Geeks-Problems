def isPalindrome(head):
    number = 0
    reverse = 0
    cur = head 
    multi = 1
    while cur:
        number = number * 10 + cur.data
        reverse = cur.data *multi + reverse
        
        cur = cur.next
        multi = multi*10
    return number == reverse
