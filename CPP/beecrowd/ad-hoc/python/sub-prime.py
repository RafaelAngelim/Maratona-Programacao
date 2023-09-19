while True:
    try:
        B, N = [int(x) for x in input().strip().split(' ')]
        has = [int(x) for x in input().strip().split(' ')]
        has.insert(0, 0)

        for _ in range(N):
            own, rec, val = [int(x) for x in input().strip().split(' ')]
            has[own] -= val
            has[rec] += val
        possivel = True
        for saldo in has:
            if(saldo < 0):
                possivel = False
                break
        print('S' if possivel else 'N')
    except EOFError:
        break