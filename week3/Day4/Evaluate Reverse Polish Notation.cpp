class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();
                if (token == "+") st.push(val1 + val2);
                else if (token == "-") st.push(val1 - val2);
                else if (token == "*") st.push(val1 * val2);
                else if (token == "/") st.push(val1 / val2);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
