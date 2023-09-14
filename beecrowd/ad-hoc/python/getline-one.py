avg, plp = 0, 0

while True:
    try:
        name = input()
        dist = int(input())
        avg += dist
        plp += 1
    except EOFError:
        break

answ = avg/plp

print(f"{answ:.1f}")