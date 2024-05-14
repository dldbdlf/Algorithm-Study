n, m = map(int,input().split())

price_pack=[]
price_each =[]
for i in range(m):
    pack_price , each_price= map(int, input().split())
    price_pack.append(pack_price)
    price_each.append(each_price)
min_pack = min(price_pack)
min_each = min(price_each)
    

if n <6:
    if min_pack < (min_each * n):
        result = min_pack
    else:
        result= min_each * n
else:
    if min_pack > min_each *6 :
        result= min_each * n
    elif min_pack > min_each * (n % 6):
        result = (min_pack * (n //6)) + min_each * (n % 6)
    else:
        result = (min_pack * (n //6 + 1))         

print(result)