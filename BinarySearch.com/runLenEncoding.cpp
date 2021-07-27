// https://binarysearch.com/problems/Run-Length-Encoding
string solve(string s) {
    int count=1;
    string str;
    int j;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])
        count++;
        else
        {
            str=str+to_string(count)+s[i];
            count=1;
        }
        j=i;
    }
    str=str+to_string(count)+s[j+1];
    return str;
}
