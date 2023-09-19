NC = int(input())

for i in range(1, NC + 1):
    N, K = [int(i) for i in input().strip().split(' ')]
    surv = 0
    for j in range(1, N + 1):
        surv = (surv + K) % j
    print(f"Case {i}: {surv + 1}")