while True:
    try:
        N = int(input())

        pair = 0
        shoe = [[0, 0] for _ in range(61)]

        for _ in range(N):
            M, L = input().strip().split(' ')
            M = int(M)

            if(L == 'D'):
                shoe[M][0] += 1
            else:
                shoe[M][1] += 1
        pair = sum([min(x[0], x[1]) for x in shoe])
        print(pair)
    except EOFError:
        break