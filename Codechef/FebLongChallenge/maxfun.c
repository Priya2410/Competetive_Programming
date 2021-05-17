test=int(input())
for i in range(test):
    n=int(input())
    arr1=[int(x) for x in input().split()]
    arr1.sort(reverse=True)
    maximum=abs(arr1[0]-arr1[1])+abs(arr1[1]-arr1[-1])+abs(arr1[0]-arr1[-1])
    print(maximum)
