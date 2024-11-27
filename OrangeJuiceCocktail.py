# Input number of drinks
n = int(input())

# Read percentages and calculate their sum
percentages = list(map(int, input().split()))
total = sum(percentages)

# Calculate the average percentage
result = total / n

# Print the result with high precision
print(f"{result:.120f}")
