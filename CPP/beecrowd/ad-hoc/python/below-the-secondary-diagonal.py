op = input().strip()
squared = []
tot = 0.0

for _ in range(12):
    row = []
    for _ in range(12):
        value = float(input())
        row.append(value)
    squared.append(row)

count = 0

for i in range(12):
    for j in range(i + 1, 12):
        tot += squared[i][j]
        count += 1

if op == 'S':
    print(f'{tot:.1f}')
elif op == 'M':
    avg = tot / count if count > 0 else 0.0
    print(f'{avg:.1f}')
