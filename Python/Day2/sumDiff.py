import math

numbers = [0.1] * 10
print(sum(numbers))  # Might not be exactly 1.0 due to floating-point errors

print(math.fsum(numbers))  # Exactly 1.0

print(sum([0.1] * 10))       # Might print 0.9999999999999999
print(math.fsum([0.1] * 10)) # Prints 1.0
