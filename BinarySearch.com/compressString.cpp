// https://binarysearch.com/problems/Compress-String
string solve(string s) {
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i-1] || i==0)
        str=str+s[i];
    }
    return str;
}