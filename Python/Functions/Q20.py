# 20. Write a Python program using function which takes coordinate values of
# two points as tuples and calculates the Euclidean and Manhattan Distance.
import math

def calculate_distances(p1, p2):
    """
    Calculates Euclidean and Manhattan distances between two points.
    p1 and p2 are expected to be (x, y) tuples.
    """
    x1, y1 = p1
    x2, y2 = p2
    
    # Euclidean Distance: sqrt((x2-x1)^2 + (y2-y1)^2)
    euclidean = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    
    # Manhattan Distance: |x2-x1| + |y2-y1|
    manhattan = abs(x2 - x1) + abs(y2 - y1)
    
    return euclidean, manhattan

# Example call
point1 = (3, 4)
point2 = (6, 8)

# (6-3) = 3; (8-4) = 4
# Euclidean: sqrt(3^2 + 4^2) = sqrt(9 + 16) = sqrt(25) = 5
# Manhattan: |3| + |4| = 7

eu_dist, man_dist = calculate_distances(point1, point2)

print(f"Points: {point1} and {point2}")
print(f"Euclidean Distance: {eu_dist}")
print(f"Manhattan Distance: {man_dist}")

# Output:
# Points: (3, 4) and (6, 8)
# Euclidean Distance: 5.0
# Manhattan Distance: 7