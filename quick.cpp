p = []

def topfive(arr):
    low = len(arr) - 5
    high = len(arr)
    for i in range(low,high):
        print(arr[i])


def partition(arr,low,high):
    i = low - 1
    pivot = arr[high]
    for j in range(low,high):
        if arr[j] <= pivot:
            i = i + 1
            (arr[i], arr[j]) = (arr[j], arr[i])
    (arr[i+1],arr[high]) = (arr[high], arr[i+1])

    return i+1

def quicksort(arr,low,high):
    if low<high:
        pi = partition(arr,low,high)
        quicksort(arr,low,pi-1)
        quicksort(arr,pi+1,high)


n = int(input("Enter number of student : "))
for i in range(0,n):
    m = input("Enter percentage : ")
    p.append(m)

print("percentage of class : ")
print(p)
high = len(p) - 1
low = 0
quicksort(p,low,high)
print("sorted list percentage of class using quick sort algo :  ")
print(p)
print("top five students percentage : ")
topfive(p)
