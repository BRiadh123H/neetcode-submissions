class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0, lon=0;
        unordered_map<char,int>m ;
        for (int i=0;i<s.length();i++ )
        {
            m[s[i]]++;
            while (m[s[i]]>1)
            {
                m[s[left]]--;
                left++;
                
            }
            lon =max (lon ,i-left+1 );
        }
        return lon;
    }
};
