# 16. Write a Python program using function to check whether a number is prime or not.
import math

def is_prime(n):
    """Checks if a number is prime."""
    if n <= 1:
        return False # 0 and 1 are not prime
    if n == 2:
        return True  # 2 is the only even prime
    if n % 2 == 0:
        return False # Other even numbers are not prime
    
    # Check for factors from 3 up to the square root of n, skipping even numbers
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
            
    return True # If no factors found, it's prime

# Example calls
print(f"Is 29 prime? {is_prime(29)}")
print(f"Is 1 prime? {is_prime(1)}")
print(f"Is 100 prime? {is_prime(100)}")
print(f"Is 97 prime? {is_prime(97)}")

# Output:
# Is 29 prime? True
# Is 1 prime? False
# Is 100 prime? False
# Is 97 prime? True