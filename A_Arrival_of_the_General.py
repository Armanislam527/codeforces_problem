n = int(input())
heights = list(map(int, input().split()))

# Find indices of maximum and minimum heights
max_idx = heights.index(max(heights))
min_idx =len(heights)-1- heights[::-1].index(min(heights))

# Calculate swaps
swaps = max_idx + (n - 1 - min_idx)
if max_idx > min_idx:
    swaps -= 1

print(swaps)
