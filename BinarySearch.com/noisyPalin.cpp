// https://binarysearch.com/problems/Noisy-Palindrome

bool solve(string s) {
    string str="";
    for(int i=0;i<s.length();i++){
    int val=int(s[i]);
    if(val>=97 && val<=122)
    str=str+s[i];
    }
    
    for(int i=0;i<=str.length()/2;i++){
        if(str[i]!=str[str.length()-1-i])
        return false;
    }

    return true;
}
