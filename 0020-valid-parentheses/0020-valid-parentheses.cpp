class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' ||s[i]=='{' ||s[i]=='[')
                st.push(s[i]);
            else
            {
                if (st.empty()==true && s[i]==')' || st.empty()==true && s[i]=='}'|| st.empty()==true && s[i]==']' )
                    return false;
                if(s[i]==')' && st.top()=='(' || s[i]=='}' && st.top() == '{'||s[i]==']' && st.top()=='[')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty() == true)
            return true;
        else
            return false;
    }
};