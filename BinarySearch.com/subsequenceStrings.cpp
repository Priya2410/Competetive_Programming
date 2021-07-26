// https://binarysearch.com/problems/Subsequence-Strings
bool solve(string s1, string s2) {
    int j=0;
    int count=0;
    for(int i=0;i<s2.length();i++){
        if(s2[i]==s1[j]){
            j++;
        }
    }
    if(j==s1.length())
    return true;
    else
    return false;
}