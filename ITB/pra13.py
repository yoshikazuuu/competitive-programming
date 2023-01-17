# Function to calculate the factorial of a number
def factorial(n):
  # Return 1 if n is 0
  if n == 0:
    return 1
  
  # Otherwise, return the product of all numbers from 1 to n
  result = 1
  for i in range(1, n + 1):
    result *= i
  return result

# Function to calculate C(n, k) using the factorial function
def C(n, k):
  return factorial(n) / (factorial(n - k) * factorial(k))

# Read n and k
n = int(input("Masukkan N: "))
k = int(input("Masukkan K: "))

# Calculate and print the result
result = C(n, k)
print(f"Tuan Riz memiliki {int(result)} cara untuk memilih mahasiswa")
