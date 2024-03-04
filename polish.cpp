class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stack;
        for(string s : tokens) {
            if(s == "+") {
                int one = stoi(stack.top());
                stack.pop();
                int two = stoi(stack.top());
                stack.pop();
                stack.push(to_string(one + two));
            }
            else if(s == "-") {
                int one = stoi(stack.top());
                stack.pop();
                int two = stoi(stack.top());
                stack.pop();
                stack.push(to_string(two - one));
            }
            else if(s == "*") {
                int one = stoi(stack.top());
                stack.pop();
                int two = stoi(stack.top());
                stack.pop();
                stack.push(to_string(one * two));
            }
            else if(s == "/") {
                int one = stoi(stack.top());
                stack.pop();
                int two = stoi(stack.top());
                stack.pop();
                stack.push(to_string(two / one));
            }
            else {
                stack.push(s);
            }
        }
        return stoi(stack.top());
    }
};