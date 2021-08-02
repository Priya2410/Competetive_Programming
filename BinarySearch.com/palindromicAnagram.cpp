// https://binarysearch.com/problems/Palindromic-Anagram

// A property of a palindrome is that it can have at most one unique character that occurs odd number of times.

bool solve(string s) {
    int a[26]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']+=1;
    };
    int count=0;
    for(int i=0;i<26;i++){
        if(a[i]&1)
        count++;

        if(count>1)
        return false;
    }
    return true;
}
