# 10. Write a Python program using function which calculates simple interest.
# The rate of interest for senior citizen is 12% and for others is 10%.

def calculate_simple_interest(principal, time, is_senior_citizen=False):
    """Calculates simple interest based on senior citizen status."""
    if is_senior_citizen:
        rate = 12
    else:
        rate = 10
    
    interest = (principal * rate * time) / 100
    return interest

# Example calls
print(f"Interest for regular citizen (10000 for 5 years): {calculate_simple_interest(10000, 5)}")
print(f"Interest for senior citizen (10000 for 5 years): {calculate_simple_interest(10000, 5, True)}")

# Output:
# Interest for regular citizen (10000 for 5 years): 5000.0
# Interest for senior citizen (10000 for 5 years): 6000.0