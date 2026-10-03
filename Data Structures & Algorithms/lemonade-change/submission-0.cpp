class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>m;
        for (auto i :bills)
        {
            if (i==5)
                m[i]++;
            else if (i==10)
            {
                if (m[5])
                {
                    m[5]--;
                    m[10]++;
                }
                else{
                    return false;
                }
            }
            else if (i==20)
            {
                if (m[5]&& m[10])
                {
                    m[5]--;
                    m[10]--;
                }
                else if (m[5]>=3) 
                    m[5]-=3;
                else
                    return false;
            }
        }
        return true;
    }
};