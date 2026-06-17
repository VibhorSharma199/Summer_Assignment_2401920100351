class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentString = "";
        int k = 0;
        for (char ch : s) {
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0');
            } else if (ch == '[') {
                countStack.push(k);
                stringStack.push(currentString);
                currentString = "";
                k = 0;
            } else if (ch == ']') {
                string decodedString = stringStack.top();
                stringStack.pop();
                int count = countStack.top();
                countStack.pop();
                for (int i = 0; i < count; ++i) {
                    decodedString += currentString;
                }
                currentString = decodedString;
            } else {
                currentString += ch;
            }
        }
        return currentString;
    }
};
