size=int(input("enter the size of list"))
array=[]
for i in range(size):
    x=int(input())
    array.append(x)
array.sort()
print(array)
print(array[len(array)-2])    