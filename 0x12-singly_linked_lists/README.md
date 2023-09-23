Singly Linked Lists
Introduction
This is a simple implementation of a Singly Linked List data structure in Python. A linked list is a data structure composed of a collection of nodes, where each node contains a value and a reference to the next node in the sequence. In a singly linked list, each node only has a reference to the next node, but not to the previous node.

Usage
To use the Singly Linked List implementation, follow these steps:

Import the SinglyLinkedList class from the singly_linked_list module:
python
Copy
from singly_linked_list import SinglyLinkedList
Create an instance of the SinglyLinkedList class:
python
Copy
my_list = SinglyLinkedList()
Perform operations on the linked list using the available methods:

is_empty(): Returns True if the linked list is empty, else False.
length(): Returns the number of nodes in the linked list.
append(value): Adds a new node with the given value at the end of the linked list.
prepend(value): Adds a new node with the given value at the beginning of the linked list.
insert(value, position): Adds a new node with the given value at the specified position in the linked list.
remove(value): Removes the first occurrence of the node with the given value from the linked list.
remove_at(position): Removes the node at the specified position from the linked list.
get(position): Returns the value of the node at the specified position in the linked list.
find(value): Returns the position of the first occurrence of the node with the given value in the linked list, or -1 if not found.
to_list(): Returns a Python list containing the values of all nodes in the linked list.
Here's an example that demonstrates the basic usage of the Singly Linked List:

python
Copy
from singly_linked_list import SinglyLinkedList

my_list = SinglyLinkedList()
print(my_list.is_empty())  # Output: True

my_list.append(10)
my_list.append(20)
my_list.append(30)
my_list.prepend(5)
my_list.insert(15, 2)
my_list.remove(20)

print(my_list.length())  # Output: 4
print(my_list.to_list())  # Output: [5, 10, 15, 30]
Limitations
This implementation does not support direct access to nodes at arbitrary positions. Accessing a node requires traversing the list from the beginning until the desired position is reached, resulting in a time complexity of O(n).
The code provided here is a basic implementation for learning purposes and may not be optimized for performance or memory usage.

