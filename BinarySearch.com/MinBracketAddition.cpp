// https://binarysearch.com/problems/Minimum-Bracket-Addition

int solve(string s) {
    stack<int> st;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
            count++;
        } else {
            if (!st.empty()) {
                if (st.top() == '(' && s[i] == ')') {
                    st.pop();
                    count--;
                } else {
                    st.push(s[i]);
                    count++;
                }
            } else {
                st.push(s[i]);
                count++;
            }
        }
    }
    return count;
}
