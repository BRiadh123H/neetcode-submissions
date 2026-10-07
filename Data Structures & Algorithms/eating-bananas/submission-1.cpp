class Solution {
public:

    long long rate (vector<int>& piles, long long k)
    {
        long long hours=0;
        for (auto i : piles)
        {
            hours+=(i+k-1)/k;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left=1, right=1000000000;
        long long res,mid,mini=INT_MAX;
        while (left<=right)
        {
            mid =(right-left)/2+left;
            res= rate (piles,mid);
            if (res>h)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
                mini=min (mid,mini);
            }
            
        }
        return mini;
    }
};
