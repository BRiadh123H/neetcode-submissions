class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0,res=0,lon=0;
        char d;
        unordered_map<char , int> m;
        for (int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            lon =max (lon ,m[s[i]]);
            while ((i-left+1) -lon >k)
            {
                m[s[left]]--;
                left++;
            }
            res= max (res ,i-left+1);
        }
        return res;

    }
};
