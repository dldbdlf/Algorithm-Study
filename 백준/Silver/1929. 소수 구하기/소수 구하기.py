num_range= list(map(int,input().split()))

number=[True]* (num_range[1]+1) 
m= int(num_range[1]** 0.5)

for i in range(2,m+1):
    if number[i] == True:
        for j in range(i +i, num_range[1]+1, i):
            number[j] =False

for i in range(num_range[0],num_range[1]+1):
    if i == 0 or i ==1:
        continue
    if number[i] == True:
        print(i)
        




