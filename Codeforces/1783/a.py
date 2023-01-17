def make_beautiful(a):
  # Sort the array in non-decreasing order
  a.sort()

  # Iterate through the array from left to right
  for i in range(len(a)):
    # If the current element is equal to the sum of all elements before it, then move it to the end of the array
    if a[i] == sum(a[:i]):
      a.append(a[i])
      del a[i]
      i -= 1

  # If the array is beautiful, then return it. Otherwise, return "NO"
  if sum(a) == 0:
    return "NO"
  else:
    return "YES"


t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  result = make_beautiful(a)
  print(result)
  if result == "YES":
    print(" ".join(map(str, a)))
