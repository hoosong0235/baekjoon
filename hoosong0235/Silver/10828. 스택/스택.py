import sys


class Node:
    def __init__(self, value, next):
        self.value = value
        self.next = next


class NodeStack:
    def __init__(self):
        self.head = None
        self.length = 0

    def push(self, value):
        if self.length == 0:
            self.head = Node(value, None)
        else:
            self.head = Node(value, self.head)
        self.length += 1

    def pop(self):
        if self.length == 0:
            return -1
        else:
            value = self.head.value
            self.head = self.head.next
            self.length -= 1
            return value

    def size(self):
        return self.length

    def empty(self):
        if self.length == 0:
            return 1
        else:
            return 0

    def top(self):
        if self.length == 0:
            return -1
        else:
            return self.head.value


stack = NodeStack()

for i in range(int(input())):
    line = sys.stdin.readline().split()
    if line[0] == "push":
        stack.push(int(line[1]))
    elif line[0] == "pop":
        print(stack.pop())
    elif line[0] == "top":
        print(stack.top())
    elif line[0] == "size":
        print(stack.size())
    elif line[0] == "empty":
        print(stack.empty())
