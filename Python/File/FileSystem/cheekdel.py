import os
if os.path.exists("Python/File/FileSystem/demofile.txt"):
    os.remove("Python/File/FileSystem/demofile.txt")
    print("The file has been deleted successfully.")
else:
    print("The file does not exist.")