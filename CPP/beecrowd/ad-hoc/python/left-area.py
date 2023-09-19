opp = input().strip()
squared = []
tot = 0.0
count = 0

for _ in range(12):
    row = []
    for _ in range(12):
        value = float(input())
        row.append(value)
    squared.append(row)

for i in range(7, 12):
    for j in range(12 - i, i):
        tot += squared[i][j]
        count += 1

if opp == 'S':
    print(f'{tot:.1f}')
elif opp == 'M':
    avg = tot / count if count > 0 else 0.0
    print(f'{avg:.1f}')
