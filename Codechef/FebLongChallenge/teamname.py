test=int(input())
for i in range(0,test):
    n=int(input())
    l1=input().split();
    count=0
    d1=dict() 
    
    for i in l1:
        word=i[1:]
        if word in d1:
            d1[word].append(i[0])
        else:
            d1[word]=[i[0]]
    
    val=list(d1.values());
    res1=[]
    res=[]
    l=0
    for i in range(0,len(val)-1):
        for j in range(i+1,len(val)):
            res=[res1.append(x+y) for x in list(val[i]) for y in list(val[j]) if(x not in val[j]) and (y not in val[i])]
    print(len(res1)*2)
    
        
