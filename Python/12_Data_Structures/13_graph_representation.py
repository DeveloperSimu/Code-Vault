graph = {
    "A": ["B", "C"],
    "B": ["A", "D"],
    "C": ["A", "D"],
    "D": ["B", "C"]
}

print("Graph representation:")

for vertex in graph:
    print(vertex, "->", graph[vertex])