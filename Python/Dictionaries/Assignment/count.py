#write a Py prog to count the lements in a list until an element is tuple
def count_until_tuple(lst):
    count = 0
    for item in lst:
        if isinstance(item, tuple):
            break
        count += 1
    return count
my_list = [1, 2, 3, (4, 5), 6, 7]
result = count_until_tuple(my_list)
print("Number of elements before the first tuple:", result)

#Output: Number of elements before the first tuple: 3