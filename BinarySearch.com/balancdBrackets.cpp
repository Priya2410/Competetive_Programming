// https://binarysearch.com/problems/Balanced-Brackets
bool solve(string s) 
{
    int count=0;
    for(int i=0;i<s.length() && count>=0;i++){
        if(s[i]=='(')
        count++;
        else 
        count--;
    }
    if(count==0)
    return true;
    else
    return false;
}
