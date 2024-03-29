a = list(map(int, input().split()))

b=[]
for i in range(1,a[0]+1):
    b.append(i)
    
c=[]
while len(b) != 0:
    d=[]
    if len(b) < a[1] and a[1] % len(b) >0:
        front = (a[1] % len(b)) -1
    elif len(b) < a[1]:
        front = (a[1] %len(b)) -1 +len(b)
    else:
        front = a[1]-1  
    c.append(b[front])
    b.pop(front)
    for i in range(len(b)):
        d.append(b[(front + i) % len(b)])
    b = d
           

result = ", ".join(map(str,c))
print("<" +result + ">")