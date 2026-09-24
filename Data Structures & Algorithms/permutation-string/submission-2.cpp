class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k =s1.length();
        map<char,int> m1;
        map<char,int> m2;
        for (int i=0;i<k;i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if (m2==m1)
            return true;
        for (int i=k;i<s2.length();i++)
        {
            m2[s2[i]]++;
            m2[s2[i-k]]--;
            if (m2[s2[i-k]]==0)   
                m2.erase(s2[i-k]);
            if (m2==m1)
                return true; 
        }
        return false;
        
    }
};
