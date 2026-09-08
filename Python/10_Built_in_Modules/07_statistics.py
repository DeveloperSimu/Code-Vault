import statistics

numbers = [10, 20, 30, 40, 50]

print("Mean:", statistics.mean(numbers))
print("Median:", statistics.median(numbers))
print("Mode:", statistics.mode([10, 20, 20, 30, 40]))
print("Standard deviation:", statistics.stdev(numbers))