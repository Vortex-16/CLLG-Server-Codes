import os
try:
    os.remove("Python/File/FileSystem/demofile.txt")
    print("The file has been deleted successfully.")
except FileNotFoundError:
    print("The file does not exist.")
# except Exception as e:
#     print(f"An error occurred: {e}")