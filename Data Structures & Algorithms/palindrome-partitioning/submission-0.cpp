class Solution {
public:
bool isPalindrome(string s) {
        string l="";
        for (auto j : s)
        {
            l=j+l;
        }
        return s==l;
    }
void backtrack(string s,int index ,vector<string>&k, vector<vector<string>>& sol)
    {
        if (index==s.length())
        {
            return sol.push_back(k) ;
        }
        for (int i =index;i<s.length();i++)
        {
            string test = s.substr(index, i - index + 1);
            if (isPalindrome(test))
            {   
                k.push_back(test);
                backtrack(s,i+1,k,sol);
                k.pop_back();
            }
        }
        
        
    }
    vector<vector<string>> partition(string s) {        
        vector<string>k;
        vector<vector<string>>sol;
        backtrack(s,0,k,sol);
        
        
        return sol;
    }
};
