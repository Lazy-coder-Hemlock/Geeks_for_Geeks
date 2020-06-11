#User function Template for python3

'''
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

Your task is to return the count of elements
in the given linked list

Function Arguments: head_node (head of the linked list)
Return Type: Integer

	Contributed By: Nagendra Jha
'''
def getCount(head_node):
    curr=head_node
    count=0
    while curr is not None:
        count+=1
        curr=curr.next
    return count
    #code here
