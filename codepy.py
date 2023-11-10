import math

# Function to calculate minimum radius 'w'
def minimum_lantern_radius(Px, Py, Ax, Ay, Bx, By):
    dOA = math.sqrt(Ax**2 + Ay**2)
    dOB = math.sqrt(Bx**2 + By**2)
    dAB = math.sqrt((Ax - Bx)**2 + (Ay - By)**2)
    dAP = math.sqrt((Ax - Px)**2 + (Ay - Py)**2)
    dBP = math.sqrt((Bx - Px)**2 + (By - Py)**2)

    # Calculate the minimum radius 'w'
    w = max(max(dOA, dOB), dAB / 2, dAP, dBP)
    return w

# Input number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    Px, Py = map(int, input().split())
    Ax, Ay = map(int, input().split())
    Bx, By = map(int, input().split())
    
    # Calculate and output the minimum radius 'w'
    result = minimum_lantern_radius(Px, Py, Ax, Ay, Bx, By)
    print(result)
