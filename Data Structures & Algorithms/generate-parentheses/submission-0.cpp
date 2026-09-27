class Solution {
public:
void backtrack(int countclosed,int countopened,string &k,vector<string>& sol)
    {
        if ((countclosed==0)&&(countopened==0))
        {
            sol.push_back(k);
            return;
        }
        if (countopened>0)
        {    k.push_back('(');
            backtrack(countclosed,countopened-1,k,sol);
            k.pop_back();}
        if (countclosed>countopened)
        {    k.push_back(')');
        backtrack(countclosed-1,countopened,k,sol);
        k.pop_back();}
        
    }

    vector<string> generateParenthesis(int n) {
        string k;vector<string> sol;
        backtrack(n,n,k,sol);
        return sol;
    }
};
