class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sumcost [103],a=cost.size();
        sumcost[1]=cost[1];
        sumcost[0]=cost[0];
        for (int i=2;i<a;i++)
        {
            sumcost[i]=min(sumcost[i-1],sumcost[i-2])+cost[i];   
        }
        sumcost[a]=min(sumcost[a-1],sumcost[a-2]);
        return sumcost[a];
        
    }
};
