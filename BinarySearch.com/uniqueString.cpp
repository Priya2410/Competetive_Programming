// https://binarysearch.com/problems/A-Unique-String
bool solve(string s) {
    map<char,int> unique;
    for(int i=0;i<s.length();i++){
        if(++unique[s[i]]>1)
        return false;
    }
    return true;
}
