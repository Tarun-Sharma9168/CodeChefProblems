for _ in range(int(input())):
    x,xx = list(map(int,input().split()))
    a = list(map(int,input().split()))
    m = max(a)
    ans = 0
    for i in a:
        ans+=m-i
    if (xx-ans)%len(a) == 0:
        print("Yes")
    else:
        print("No")