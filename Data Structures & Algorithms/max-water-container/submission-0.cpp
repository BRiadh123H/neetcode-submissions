class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=-1,n=heights.size(),start =0;
        while (start < n-1)
        {
            maxarea=max (maxarea,min (heights[start],heights[n-1])*(n-1-start)) ;
            if (heights[start]<heights[n-1])
                start++;
            else
                n--;
        }
        return maxarea;
    }
};
