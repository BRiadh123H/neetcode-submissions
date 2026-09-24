class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())
            return false;
        
        std::map<char, int> s1 ;
            std::map<char, int> t1 ;
        for (int i =0;i<s.length();i++)
        {
            s1[s[i]]++;
            t1[t[i]]++;
                
        }
        if (t1==s1)
            return true;
        else 
            return false;
    }
};
