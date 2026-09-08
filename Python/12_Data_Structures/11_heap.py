import heapq

heap = []

heapq.heappush(heap, 30)
heapq.heappush(heap, 10)
heapq.heappush(heap, 20)
heapq.heappush(heap, 5)

print("Heap:", heap)

smallest = heapq.heappop(heap)

print("Smallest element:", smallest)
print("Heap after removal:", heap)