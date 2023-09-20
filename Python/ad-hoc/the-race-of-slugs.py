while True:
    try:
        slugs = int(input())
        speed = list(map(int, input().split()))
        
        max_speed = max(speed)
        
        if max_speed < 10:
            print(1)
        elif max_speed >= 10 and max_speed < 20:
            print(2)
        else:
            print(3)
    
    except EOFError:
        break
