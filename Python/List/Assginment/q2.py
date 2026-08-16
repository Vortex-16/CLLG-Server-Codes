# Two add two matrix
table1 = [[1, 2, 3], [4, 5, 6]]
print("Values in table1 by row are:")
for row in table1:
    for item in row:
        print(item, end=" ")
    print()

table2 = [[7, 8, 9], [4, 5, 6]]
print("Values in table2 by row are:")
for row in table2:
    for item in row:
        print(item, end=" ")
    print()

print("The Added Matrix is:")
result = []
for i in range(len(table1)):
    row = []
    for j in range(len(table1[i])):
        row.append(table1[i][j] + table2[i][j])
    result.append(row)

for row in result:
    for item in row:
        print(item, end=" ")
    print()
