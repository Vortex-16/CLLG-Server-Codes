#  write a python program to store student data in a dictionary. 
#  The student data should include name, age, and subject. Remove the duplicate entries from the dictionary.

student_data = {
    'name': ['Rohit', 'Ankush', 'Aman', 'Raj'],
    'age': [20, 21, 20, 22],
    'subject': ['Math', 'Science', 'Math', 'History']
}
# Remove duplicates by converting lists to sets and back to lists
student_data['name'] = list(set(student_data['name']))
student_data['age'] = list(set(student_data['age']))
student_data['subject'] = list(set(student_data['subject']))
print(student_data)

# Output: {'name': ['Rohit', 'Ankush', 'Raj', 'Aman'], 'age': [20, 21, 22], 'subject': ['Science', 'History', 'Math']}