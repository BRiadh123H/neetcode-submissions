class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        if (s.length()%2==1)return false;
        for (auto x: s)
        {
            if ((x=='[')||(x=='(')||(x=='{'))
                st.push(x);
            else
            {
                if (st.empty())
                    return false;
                char j=st.top();
                if ( ((j=='[')&& (x!=']'))||((j=='{')&& (x!='}'))||((j=='(')&& (x!=')')))
                    return false;
                st.pop();
            }

        }
        return st.empty();
    }
};
