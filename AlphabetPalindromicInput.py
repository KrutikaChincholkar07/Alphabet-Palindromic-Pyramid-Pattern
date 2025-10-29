# Take user input
ch = input("Enter an uppercase letter: ").upper()

n = ord(ch) - ord('A') + 1  # Number of rows

for i in range(n):
    # Print leading spaces
    print("  " * (n - i - 1), end="")
    
    # Increasing letters
    for j in range(i + 1):
        print(chr(ord('A') + j), end=" ")
    
    # Decreasing letters
    for j in range(i - 1, -1, -1):
        print(chr(ord('A') + j), end=" ")
    
    print()
