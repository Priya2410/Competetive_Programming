// https://binarysearch.com/problems/ASCII-String-to-Integer

int solve(string s) {
    int sum=0;
    int sum1=0;
    string str="";
    for(int i=0;i<=s.length();i++){
        if(isdigit(s[i])){
            sum=sum*10+s[i]-'0';
        }
        else
        {
            sum1=sum1+sum;
            sum=0;
        }
    }
    return sum1;
}
