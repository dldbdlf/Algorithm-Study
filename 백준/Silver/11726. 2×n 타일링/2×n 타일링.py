n = int(input())

results=[1,2]
if n > len(results):
    while n  >  len(results):
        results.append(results[-1] + results[-2])

print(results[n-1] % 10007)
    
    
        
        
    
    
    