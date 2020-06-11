#User function Template for python3
'''
	Your task is to segregate the list of 
	0s,1s and 2s.
	
	Function Arguments: head of the original list.
	Return Type: head of the new list formed.

	{
		# Node Class
		class Node:
		    def __init__(self, data):   # data -> value stored in node
		        self.data = data
		        self.next = None
	}

	Contributed By: Nagendra Jha
'''
def swap(store):
    zero=0
    one=0
    two=len(store)-1
    while one<=two:
        if store[one]==0:
            store[zero],store[one]=store[one],store[zero]
            zero+=1
            one+=1
        elif store[one]==2:
            store[one],store[two]=store[two],store[one]
            two-=1
        else:
            one+=1
    return store
def segregate(head):
    store=[]
    curr=head
    while curr is not None:
        store.append(curr.data)
        curr=curr.next
    arr=swap(store)
    for i in arr:
        print(i,end=" ")
    #code here
    
