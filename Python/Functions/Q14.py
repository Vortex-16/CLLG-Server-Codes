# 14. Write a Python program using function which checks whether a year is a leap year or not.

def is_leap_year(year):
    """Checks if a given year is a leap year."""
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    else:
        return False

# Example calls
print(f"Is 2000 a leap year? {is_leap_year(2000)}") # Divisible by 400
print(f"Is 1900 a leap year? {is_leap_year(1900)}") # Divisible by 100 but not 400
print(f"Is 2024 a leap year? {is_leap_year(2024)}") # Divisible by 4 but not 100
print(f"Is 2023 a leap year? {is_leap_year(2023)}") # Not divisible by 4

# Output:
# Is 2000 a leap year? True
# Is 1900 a leap year? False
# Is 2024 a leap year? True
# Is 2023 a leap year? False