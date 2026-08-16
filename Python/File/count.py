words=0
with open("Python/File/demofile.txt","r") as f:
    for line in f:
        w=line.split()
        words+=len(w)
print("Total number of words:",words)

