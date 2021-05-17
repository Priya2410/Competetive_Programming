#include <stdio.h>
void merge(int *a,int l1,int m,int r1)
{
    int n1;
    int n2;
    n1=m-l1+1;
    n2=r1-m;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++)
    {
        l[i]=a[l1+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=a[m+i+1];
    }
    
    int i=0,j=0,k=l1;
    while(i<n1 && j<n2){
        if(l[i]<r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    
    while(i<n1)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    
    while(j<n2)
    {
        a[k]=r[j];
        j++;
        k++;
    }
}

void mergesort(int *a,int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    mergesort(a,0,n);
	    for(int i=1;i<n+1;i++)
	    {
	        printf("%d\n",a[i]);
	    }
	return 0;
}





