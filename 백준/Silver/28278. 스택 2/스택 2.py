a= int(input())

b=[]
for i in range(a):
    b.append(list(map(int, input().split())))


def stack(arr, stack):
    if arr[0] == 1:
        stack.append(arr[1])
    elif arr[0] ==2 :
        if len(stack)== 0:
            print(-1)
        else:
            print(stack[-1])
            stack.pop()
    elif arr[0] ==3:
        print(len(stack))
    elif arr[0] == 4:
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif arr[0] == 5:
        if len(stack) ==0:
            print(-1)
        else:
            print(stack[-1])

FinalStack =[]

for i in range(a):
    stack(b[i], FinalStack)