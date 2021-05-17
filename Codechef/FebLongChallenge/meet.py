test=int(input());
def compute(time1):
    arr=[int(x) for x in time1[0].split(':')]
    if(time1[1]=='AM'):
        if(arr[0]==12):
            time_sec=arr[1]*60;
        else:
            time_sec=arr[1]*60+arr[0]*3600
    if(time1[1]=='PM'):
        if(arr[0]==12):
            time_sec=arr[1]*60+arr[0]*3600
        else:
            time_sec=arr[1]*60+(arr[0]+12)*3600
    return time_sec
    
    
for i in range(0,test):
    arr=[]
    l1=[]
    time1=input().split();
    time1=compute(time1);
    n=int(input());
    string=""
    for j in range(0,n):
        a=input()
        l1.append([a[:8],a[8:]]);
        arr.append(compute(l1[j][0].split()))
        arr.append(compute(l1[j][1].split()))
        if(time1>=arr[len(arr)-2] and time1<=arr[len(arr)-1]):
            string=string+'1';
        else:
            string=string+'0'
    print(string)
