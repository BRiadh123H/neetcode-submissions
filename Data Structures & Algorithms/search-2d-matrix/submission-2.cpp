class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix.size(),m=matrix[0].size();
        int left=0,right=m*n-1,mid;
        if (matrix.empty() || matrix[0].empty()) return false;
                while (right>=left)
                {
                    mid =left+(right-left)/2;
                    if (matrix[mid/m][mid%m]==target)
                        return true;
                    else if (matrix[mid/m][mid%m]<target)
                        left=mid+1;
                    else
                        right=mid-1;
                }
            return false;
            
        
    }
};
