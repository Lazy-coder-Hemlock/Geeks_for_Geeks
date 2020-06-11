#User function Template for python3

'''
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
'''
def compute(head): 
    curr=head
    s=""
    while curr is not None:
        s+=curr.data
        curr=curr.next
    return s==s[::-1]
    #return True/False
