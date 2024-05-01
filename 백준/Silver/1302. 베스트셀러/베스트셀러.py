num= int(input())
sell_dic={}
for i in range(num):
    sell = input()
    if sell  not in sell_dic:
        sell_dic[sell] = 1
    else:
        sell_dic[sell] += 1


max = 0
for i in (sell_dic):
    if sell_dic[i] > max:
        max = sell_dic[i]
        max_key= i 
    elif sell_dic[i] == max and max_key > i:
        max = sell_dic[i]
        max_key = i
print(max_key)


