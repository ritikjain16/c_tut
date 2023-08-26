class deq:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []
        print(d.items)

    def enqueue(self, item):
        self.items.append(item)
        print(d.items)

    def dequeue(self):
        self.items.pop(0)
        print(d.items)


class Dequeue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []
        print(d.items)

    def addFront(self, item):
        self.items.insert(0, item)
        print(d.items)

    def addRear(self, item):
        self.items.append(item)
        print(d.items)

    def removeFront(self):
        self.items.pop(0)
        print(d.items)

    def removeRear(self):
        self.items.pop()
        print(d.items)

    def size(self):
        return len(self.items)


# d = deq()
# print(d.isEmpty())
# d.enqueue(1)
# d.enqueue(2)
# d.enqueue(3)
# d.enqueue(4)
# d.enqueue(5)
# print(d.isEmpty())
# d.dequeue()
# d.dequeue()
# d.dequeue()
# d.dequeue()
# d.dequeue()
# print(d.isEmpty())


d= Dequeue()
print(d.isEmpty())
d.addRear(1)
d.addRear(2)
d.addRear(3)
d.addRear(4)

d.removeFront()

d.addFront(1)

d.removeRear()
