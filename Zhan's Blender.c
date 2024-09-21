def solve():
    t = int(input()) 
    for _ in range(t):
        n = int(input())  
        x, y = map(int, input().split()) 
        if n == 0:
            print(0)
            continue
        
        time_required = (n + min(x, y) - 1) // min(x, y)
        print(time_required)
 
solve()