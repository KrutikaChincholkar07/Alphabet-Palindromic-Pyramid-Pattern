rows = 5
for i in range(rows):
    # Print leading spaces
    print("  " * (rows - i - 1), end="")
    
    # Increasing letters
    for j in range(i + 1):
        print(chr(65 + j), end=" ")
    
    # Decreasing letters
    for j in range(i - 1, -1, -1):
        print(chr(65 + j), end=" ")
    
    print()
