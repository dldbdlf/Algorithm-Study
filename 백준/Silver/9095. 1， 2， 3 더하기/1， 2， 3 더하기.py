n= int(input())
numbers=[]
for i in range(n):
    numbers.append(int(input()))
    
def case(n):
    if n ==1:
        return 1
    elif n == 2:
        return 2
    elif n == 3:
        return 4
    else:
        return case(n-1) + case(n-2) + case(n-3)
for i in range(n):
    print(case(numbers[i]))