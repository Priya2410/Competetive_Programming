// https://binarysearch.com/problems/Balanced-Brackets-Sequel
bool solve(string s) {
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
    if (s1.empty())
        return true;
    else
        return false;
}

// OR

// bool solve(string s) {
//     stack<char> s1;
//     for (int i = 0; i < s.length(); i++) {
//         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
//         s1.push(s[i]);
//         else{
//             if(s1.empty())
//             return false;
//             else if(s[i]==')' && s1.top()!='(')
//             return false;
//             else if(s[i]=='}' && s1.top()!='{')
//             return false;
//             else if(s[i]==']' && s1.top()!='[')
//             return false;
//             else
//             s1.pop();
//         }
//     }
//     return s1.empty();
// }
