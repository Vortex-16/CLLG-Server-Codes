# 12. Write a Python program using function that computes C(n,r).

def factorial(num):
    """Helper function to calculate factorial."""
    if num < 0:
        return 0 # Factorial not defined for negative numbers
    if num == 0 or num == 1:
        return 1
    
    result = 1
    for i in range(2, num + 1):
        result *= i
    return result

def combinations(n, r):
    """Computes C(n,r) using the formula n! / (r! * (n-r)!)."""
    if r > n or r < 0:
        return 0 # Invalid input
    
    c = factorial(n) / (factorial(r) * factorial(n - r))
    return int(c)

# Example call
print(f"C(10, 2) = {combinations(10, 2)}")
print(f"C(5, 3) = {combinations(5, 3)}")

# Output:
# C(10, 2) = 45
# C(5, 3) = 10