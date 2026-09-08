from collections import deque

queue = deque()

queue.append(10)
queue.append(20)
queue.append(30)

print("Deque:", queue)

queue.appendleft(5)

print("After adding at left:", queue)

queue.pop()

print("After removing from right:", queue)

queue.popleft()

print("After removing from left:", queue)