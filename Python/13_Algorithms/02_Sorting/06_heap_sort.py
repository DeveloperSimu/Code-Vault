import heapq

numbers = [12, 11, 13, 5, 6, 7]

heap = numbers.copy()

heapq.heapify(heap)

sorted_numbers = []

while heap:
    sorted_numbers.append(heapq.heappop(heap))

print("Sorted array:", sorted_numbers)