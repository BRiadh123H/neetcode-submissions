class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> a(digits.size(),0);
        int i=digits.size()-1;
        while (i>=0 && digits[i]==9)
        {
            a[i]=0;
            i--;    
        }
        if (i==-1)
        {
            a.insert(a.begin(), 1);
        }
        else
        {
            a[i]=digits[i]+1;
            i--;
            while (i>=0 )
            {
            a[i]=digits[i];
            i--;    
            }
        }
        return a;
    }
};
