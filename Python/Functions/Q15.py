# 15. Write a Python program using function which finds out maximum of three numbers.

def find_max(a, b, c):
    """Finds the maximum of three numbers."""
    if a >= b and a >= c:
        return a
    elif b >= a and b >= c:
        return b
    else:
        return c

# Example call
print(f"The max of (10, 50, 20) is: {find_max(10, 50, 20)}")
print(f"The max of (99, 9, 90) is: {find_max(99, 9, 90)}")

# Output:
# The max of (10, 50, 20) is: 50
# The max of (99, 9, 90) is: 99