// https://binarysearch.com/problems/Anagram-Checks

bool solve(string s0, string s1) {
    if(s0.length()!=s1.length())
    return false;
    int a[26]={0};
    int b[26]={0};
    for(int i=0;i<s0.length();i++){
        a[s0[i]-'a']+=1;
        b[s1[i]-'a']+=1;
    }

    for(int i=0;i<26;i++){
        if(a[i]!=b[i])
        return false;
    }
    
    return true;

}
