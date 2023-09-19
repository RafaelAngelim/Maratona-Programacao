weight = 0.0
loss = 0.0
N = int(input())
for i in range(1, N + 1):
    V = float(input())
    banananananananananananananananaanananananananananananananananananananananananananananananas = len(input().strip().split(' '))
    print(f"day {i}: {banananananananananananananananaanananananananananananananananananananananananananananananas} kg")

    weight += banananananananananananananananaanananananananananananananananananananananananananananananas
    loss += V
weight /= N
loss /= N
print(f"{weight:.2f} kg by day")
print(f"R$ {loss:.2f} by day")