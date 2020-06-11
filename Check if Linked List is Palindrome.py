	is a pallindrome or not.
	
	Function Arguments: head (reference to head of the linked list)
	Return Type: boolean , no need to print just return True or False.

	{
		# Node Class
		class Node:
		    def __init__(self, data):   # data -> value stored in node
		        self.data = data
		        self.next = None
	}

	Contributed By: Nagendra Jha
'''
def isPalindrome(head):
    curr=head
    s=""
    while curr is not None:
        s+=str(curr.data)
        curr=curr.next
    return s==s[::-1]
