// https://binarysearch.com/problems/Removing-Parentheses
int solve(string s) {
    int num=0;
    stack<char> s1;
    for (int i = 0; i < s.length(); i++) {
        if (s1.empty() == false &&
            ((s[i] == ')' && s1.top() == '(') || (s[i] == '}' && s1.top() == '{') ||
             (s[i] == ']' && s1.top() == '['))) {
            s1.pop();
        } else {
            s1.push(s[i]);
        }
    }
        while(!s1.empty()){
            num++;
            s1.pop();
        }
    return num;
}
