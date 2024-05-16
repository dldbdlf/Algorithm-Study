n = int(input())

def factorial(n):
    result =1
    for i in range(1,n+1):
        result *= i
    return result
    
for i in range(n):
    M,N= map(int, input().split())
    print(factorial(N)// (factorial(N-M) * factorial(M)))
    
    
    