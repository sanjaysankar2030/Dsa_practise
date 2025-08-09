class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Linked:
    def __init__(self):
        self.head=None
    def append(self,element):
        current=self.head
        node=Node(element)
        if current is None:
            self.head=Node(element)
        else:
            current=head.next
l=Linked
l.append(5)
l.append(6)

