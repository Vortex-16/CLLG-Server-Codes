# 13. Write a Python program using function that computes the following series
# up to n-th term: 1/1! + 4/2! + 27/3! + ... (i.e., n^n / n!)

def factorial_helper(n):
    """Helper function to calculate factorial."""
    if n == 0: return 1
    res = 1
    for i in range(1, n + 1): 
        res *= i
    return res

def compute_series(n):
    """Computes the sum of the series i^i / i! up to n terms."""
    total_sum = 0.0
    for i in range(1, n + 1):
        numerator = i ** i
        denominator = factorial_helper(i)
        total_sum += (numerator / denominator)
    return total_sum

# Example call
# Term 1: 1^1 / 1! = 1
# Term 2: 2^2 / 2! = 4 / 2 = 2
# Term 3: 3^3 / 3! = 27 / 6 = 4.5
# Sum(3) = 1 + 2 + 4.5 = 7.5
print(f"Sum of series up to 3 terms: {compute_series(3)}")
print(f"Sum of series up to 5 terms: {compute_series(5)}")

# Output:
# Sum of series up to 3 terms: 7.5
# Sum of series up to 5 terms: 44.208333333333336