# 17. Write a Python program using function to check whether a number is armstrong or not.

def is_armstrong(n):
    """Checks if a number is an Armstrong number."""
    if n < 0:
        return False
        
    s = str(n)
    num_digits = len(s)
    total_sum = 0
    
    temp = n
    while temp > 0:
        digit = temp % 10
        total_sum += digit ** num_digits
        temp //= 10
        
    return n == total_sum

# Example calls
# 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
print(f"Is 153 an Armstrong number? {is_armstrong(153)}")
# 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634
print(f"Is 1634 an Armstrong number? {is_armstrong(1634)}")
# 123 = 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36
print(f"Is 123 an Armstrong number? {is_armstrong(123)}")

# Output:
# Is 153 an Armstrong number? True
# Is 1634 an Armstrong number? True
# Is 123 an Armstrong number? False