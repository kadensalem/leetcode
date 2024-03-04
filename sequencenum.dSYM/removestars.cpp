class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '*')
                st.pop();
            else
                st.push(s[i]);
        }
        string ret;
        while(!st.empty()) {
            char c = st.top();
            st.pop();
            ret += c;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};