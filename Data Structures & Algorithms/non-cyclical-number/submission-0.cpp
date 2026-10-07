class Solution {
public:
    bool isHappy(int n) {
        map<int,int>m;
        int res=0,d;
        while ((res!=1)&& (m[res]<=1))
        {
            res=0;
            while (n!=0)
            {
                d=n%10;
                res+=d*d;
                n=n/10;
            }
            cout << res<<" ";
            m[res]++;
            n=res;

        }
        if (res==1)
            return true;
        return false;
    }
};
