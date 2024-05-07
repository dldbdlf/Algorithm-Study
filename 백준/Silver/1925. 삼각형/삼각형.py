coordinate =[]
slides =[]
for i in range(3):
    x,y = input().split()
    x= int(x)
    y= int(y)
    coordinate.append([x,y])

def distance(arr1, arr2):
    x= arr1[0]- arr2[0]
    y= arr1[1]- arr2[1]
    result = ((x **2) + (y **2))
    if y == 0:
        slide = 0
    else:
        slide= x /y
    slides.append(slide)
    return result
distances =[]
a= distance(coordinate[0], coordinate[1])
b= distance(coordinate[1], coordinate[2])
c= distance(coordinate[0],coordinate[2])
distances.append(a)
distances.append(b)
distances.append(c)
distances.sort()

result =''
if (distances[0] + distances[1]) < distances[2]:
    result += 'Dunkak'
elif  (distances[0] + distances[1]) == distances[2]:
    result += 'Jikkak'      
else:
    result += 'Yeahkak'
    
if distances.count(a) == 3:
    result = 'Jung'
elif a == b or b == c or c == a:
    result += '2'
    
if (distances[0]**0.5 + distances[1]**0.5) < distances[2]**0.5 or slides.count(slides[0]) == 3:
    result = 'X'
else:
    result += 'Triangle'

print(result)