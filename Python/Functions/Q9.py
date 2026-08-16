# 9. Write a Python program using function which prints the name of the subjects
# you like to read. The total number of subjects may vary.

def print_subjects(*subjects):
    """Prints all subjects passed as arguments."""
    if not subjects:
        print("You haven't passed any subjects.")
        return
    
    print("You like to read:")
    for sub in subjects:
        print(f"- {sub}")

# Example call
print_subjects("Computer Architecture", "Operating Systems", "Data Structures")
print("---")
print_subjects("History")

# Output:
# You like to read:
# - Computer Architecture
# - Operating Systems
# - Data Structures
# ---
# You like to read:
# - History