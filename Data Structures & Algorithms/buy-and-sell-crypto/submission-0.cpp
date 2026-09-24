class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy =INT_MAX,sell=prices[0],lon=0;
        for (int i =0;i<prices.size();i++)
        {
            buy =min (buy,prices[i]);
            lon =max (lon ,prices[i]-buy);
        }
        return lon ;
    }
};
