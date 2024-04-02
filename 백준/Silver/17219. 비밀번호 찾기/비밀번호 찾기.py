import sys

n,m = map(int, sys.stdin.readline().split())

memo={}
for i in range(n):
    site,pwd= map(str,sys.stdin.readline().split())
    memo[site] = pwd
    

result =[]
for i in range(m):
    site_search,trash = sys.stdin.readline().split("\n")
    result.append(memo[site_search])
    
for i in range(m):
    print(result[i])