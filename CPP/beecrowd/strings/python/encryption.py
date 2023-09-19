N = int(input())

for _ in range(N):
    M = input()
    newM = ""
    for char in M:
        newM += chr(ord(char) + 3) if char.isalpha() else char
    M = newM[::-1]
    M = M[:len(M)//2] + ''.join([chr(ord(char) - 1) for char in M[len(M)//2:]])

    print(M)