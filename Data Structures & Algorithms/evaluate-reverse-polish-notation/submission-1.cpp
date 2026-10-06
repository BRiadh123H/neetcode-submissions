class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int res,b,a;
        for (int i=0;i<tokens.size();i++)
        {
            if (tokens[i]=="+")
            {
                a=s.top();
                s.pop();
                b=s.top();
                res=b+a;
                s.pop();
                s.push (res);
                    }
            else if (tokens[i]=="-")
            {   
                a=s.top();
                s.pop();
                b=s.top();
                res=b-a;
                s.pop();
                s.push (res);
                
                    }
            else if (tokens[i]=="*")
            {        a=s.top();
                s.pop();
                b=s.top();
                res=b*a;
                s.pop();
                s.push (res);
                    }
            else if (tokens[i]=="/")
            {   a=s.top();
                s.pop();
                b=s.top();
                res=b/a;
                s.pop();
                s.push (res);
                    }
            else
            {
                s.push(std::stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
