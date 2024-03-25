a = list(map(int, input().split()))

b=[]
for i in range(a[0]):
    b.append(int(input()))

c=[]
for i in range(a[0]):
    if a[1] // b[i] ==0:
        break
    else:
        c.append(b[i])
    
c.reverse()
    
number =0
remain= a[1]
for i in range(len(c)):
    number += remain // c[i]
    remain %= c[i]
    if remain % c[i] == 0:
        break

print(number)
    
    
    
        
                  
            
            