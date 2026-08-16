# 8. Write a Python program which calculates volume of a box using function.
# The number of arguments passed, are at most three and at least zero.

def calculate_volume(length=1, width=1, height=1):
    """Calculates volume with 0 to 3 arguments, using 1 as default."""
    return length * width * height

# Example calls
print(f"Volume with 0 args: {calculate_volume()}")
print(f"Volume with 1 arg: {calculate_volume(5)}")
print(f"Volume with 2 args: {calculate_volume(5, 4)}")
print(f"Volume with 3 args: {calculate_volume(5, 4, 3)}")

# Output:
# Volume with 0 args: 1
# Volume with 1 arg: 5
# Volume with 2 args: 20
# Volume with 3 args: 60