#write a pyhton program to invert a dictionary, i.e. it makes key of one dictionary value of another and vice versa.

d={1:'a',2:'b',3:'c'}
d1={}
for k,v in d.items():
    d1[v]=k
print("The inverted dictionary is:",d1)

# Output: The inverted dictionary is: {'a': 1, 'b': 2, 'c': 3}