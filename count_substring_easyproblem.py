t=int(input())
while (t > 0):
    len=input()
    s=str(input())
    count=0
    for i in s:
        if(i == '1'):
            count=count+1
    print((count*(count+1))//2)
    t=t-1        
