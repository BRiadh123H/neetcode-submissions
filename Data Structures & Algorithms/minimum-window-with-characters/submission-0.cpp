class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size()==0)
            return "";
        unordered_map <int,int> window, countT;
        for (auto l: t)
        {
            countT[l]++;
        }
        int have=0; int should=countT.size();
        
        int left =0, resLen=INT_MAX, res=0;
        for (int right=0;right<s.size();right++)
        {
            char d =s[right];
            window[d]++;
            if (countT.count(d) && window[d] == countT[d])
            {
                have++;
            }
            while (have == should) 
            {
                if((right-left+1)<resLen)
                {
                    resLen=right-left+1;
                    res=left;
                }
                window[s[left]]--;
                if (countT.count(s[left]) && window[s[left]] < countT[s[left]])
                {
                    have--;
                }
                left++;
            }
            
        }
        return resLen == INT_MAX ? "" : s.substr(res, resLen);
    }
};
