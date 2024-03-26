a= int(input())

b=[]
for i in range(a):
    b.append(list(map(str, input())))

for i in range(a):
    b[i].reverse()



numbers =[]
for i in range(a):
    for j in range(i+1,a):
        num =1
        for k in range(len(b[i])):
            if b[i][k] != b[j][k]:
                break
            num +=1
        numbers.append(num)

print(max(numbers))


