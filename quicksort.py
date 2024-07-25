def partition(array, l, r, pivot):
    while l <= r:

        while  array[l] < pivot:
            l+=1
        while array[r] > pivot:
            r-=1
        
        if l<=r:
            array[l], array[r], = array[r], array[l]
            l+=1
            r-=1

    return l

def quickSort(array, s, e):
    if s < e:
        mid = (s + e) // 2 
        pivot = array [mid]
        index = partition(array, s, e, pivot)
        quickSort(array, s, index-1 )
        quickSort(array, index, e)

def quickSortAlgorithm(array):
    quickSort(array,0,len(array)-1)

numbers = [2,5,3,1,4]

print("before sort: ",numbers)

quickSortAlgorithm(numbers)

print("after sort: ",numbers)

