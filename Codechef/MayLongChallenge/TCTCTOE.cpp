#include <iostream>
using namespace std;
int calc(int *a,int count_u,int count_x,int count_o)
{
    int winner_x=0,winner_o=0;
    if(count_u==0)
    {
        if((count_x+count_o)!=9)
        return 3;
        if(a[0]==a[1] && a[1]==a[2] && a[0]!=12)
        {
            if(a[0]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[3]==a[4] && a[4]==a[5] && a[3]!=12)
        {
            if(a[3]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[6]==a[7] && a[7]==a[8] && a[6]!=12)
        {
            if(a[6]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[0]==a[3] && a[3]==a[6] && a[6]!=12)
        {
            if(a[0]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[1]==a[4] && a[4]==a[7] && a[1]!=12)
        {
            if(a[1]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[2]==a[5] && a[5]==a[8] && a[2]!=12)
        {
            if(a[2]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[0]==a[4] && a[4]==a[8] && a[0]!=12)
        {
            if(a[0]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[2]==a[4] && a[4]==a[6] && a[2]!=12)
        {
            if(a[2]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if((winner_x==0 && winner_o>0 && count_x==count_o)||(winner_o==0 && winner_x>0 && count_x-count_o==1)||(winner_o==0 && winner_x==0 && count_x-count_o==1))
        return 1;
        else
        return 3;
    }
    
    else
    {
        if(count_o > count_x)
        return 3;
        if(a[0]==a[1] && a[1]==a[2] && a[0]!=12)
        {
            if(a[0]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[3]==a[4] && a[4]==a[5] && a[3]!=12)
        {
            if(a[3]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[6]==a[7] && a[7]==a[8] && a[6]!=12)
        {
            if(a[6]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[0]==a[3] && a[3]==a[6] && a[6]!=12)
        {
            if(a[0]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[1]==a[4] && a[4]==a[7] && a[1]!=12)
        {
            if(a[1]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[2]==a[5] && a[5]==a[8] && a[2]!=12)
        {
            if(a[2]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[0]==a[4] && a[4]==a[8] && a[0]!=12)
        {
            if(a[0]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if(a[2]==a[4] && a[4]==a[6] && a[2]!=12)
        {
            if(a[2]==10)
            winner_x+=1;
            else
            winner_o+=1;
        }
        if((winner_x==0 && winner_o==0 && count_x==count_o && count_x!=0) ||(winner_x==0 && winner_o==0 && (count_x-count_o)==1) || (count_u==9))
        return 2;
        else if((winner_x==0 && winner_o>0 && count_x==count_o) || (winner_o==0 && winner_x>0 && (count_x-count_o)==1))
        return 1;
        else if(winner_x==0 && winner_o==0 && count_x==count_o && count_x==0)
        return 3;
        else
        return 3;
        
    }
}

int main() {
	// your code goes here
	int test;
	cin>>test;
	char c;
	while(test--)
	{
	    int a[9];int count_x=0,count_o=0,count_u=0;
	    for(int i=0;i<9;i++){
	    cin>>c;
	    if(c=='X')
	    {
	    a[i]=10;
	    count_x++;
	    }
	    else if(c=='O')
	    {
	    a[i]=11;
	    count_o++;
	    }
	    else
	    {
	    a[i]=12;
	    count_u++;
	    }
	    }
	   cout<<calc(a,count_u,count_x,count_o)<<endl;
	}

	return 0;
}
