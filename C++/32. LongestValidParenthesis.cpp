//Given a string containing just the characters 
//'(' and ')', find the length of the longest valid (well-formed) parentheses substring.
//We can solve this by using the concept of stack. We will check for the top most closing brace and calculate max length.

class Solution {
public:
    int longestValidParentheses(string str) {
        int  n=str.length();
        stack<int> st;
        st.push(-1);
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(st.top()!=-1 && str[st.top()]=='(' && str[i]==')')
            {
                st.pop();
                ans=max(ans,i-st.top());
            }
            else st.push(i);
        }
        
        return ans;
    }
};
