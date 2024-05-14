original = list(input())
target= list(input())

count = 0
change=0
flags =[]
for i in range(len(original)-len(target)+1):
    if change > 0 and i < flags[0] + len(target):
        continue
    change = 0
    flags =[]
    for j in range(len(target)):
        if original[i+j] != target[j]:
            break
        if j == len(target)-1:
            count += 1
            change +=1
            flags.append(i)
        
print(count) 