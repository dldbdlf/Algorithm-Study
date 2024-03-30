num = int(input())

parenthesis =[]
for i in range(num):
    parenthesis.append(str(input()))

def VPS(arr):
    stack=[]
    for i in (arr):
        if i == "(":
            stack.append(i)
        else:
            if len(stack) ==0:
                return "NO"
            else:
                stack.pop()
    if len(stack) ==0:
        return "YES"
    else:
        return "NO"

for i in range(num):
    print(VPS(parenthesis[i]))
        
    
    