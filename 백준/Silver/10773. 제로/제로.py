n = int(input())

arr=[]
num=[]
for i in range(n):
    input_num= int(input())
    if input_num== 0:
        arr.pop()
    
    else:
        arr.append(input_num)

print(sum(arr))       