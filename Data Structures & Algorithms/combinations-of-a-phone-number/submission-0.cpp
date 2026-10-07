class Solution {
public:
    void backtrack(vector<string>  &res, string &k ,string digits, int index)
    {
        if (index==digits.size())
        {
            res.push_back(k);
                return ;
        }
        else
        {
            int a;
            if ((digits[index]-'0')<=6)
            {
                a=(digits[index]-'0'-2)*3+97;
                for (int i=a;i<a+3;i++)
                {
                    char d=char(i);
                    k.push_back(d);
                    backtrack(res,k,digits,index+1);
                    k.pop_back();
                }
            }
            else if ((digits[index]-'0')==7)
            {
                a=112;
                for (int i=a;i<a+4;i++)
                {
                    k.push_back(char(i));
                    backtrack(res,k,digits,index+1);
                    k.pop_back();
                }
            }
            else if ((digits[index]-'0')==8)
            {
                for (int i=116;i<119;i++)
                {
                    k.push_back(char(i));
                    backtrack(res,k,digits,index+1);
                    k.pop_back();
                }
            }
            else if ((digits[index]-'0')==9)
            {
                
                for (int i=119;i<123;i++)
                {
                    k.push_back(char(i));
                    backtrack(res,k,digits,index+1);
                    k.pop_back();
                }
            }
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if (digits=="")
            return res;
        
        string k;
        backtrack(res,k,digits,0);
        return res;
    }
};
