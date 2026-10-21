class Solution {
public:
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty() || matrix[0].empty()) return res;
        
        int right=matrix[0].size()-1;
        int left=0;
        int top=0;
        int buttom=matrix.size()-1;
        while ((left <=right)&&(top<=buttom))
        {
            for (int i=left;i<=right;i++)
                res.push_back(matrix[top][i]);
            top++;
            for (int i=top;i<=buttom;i++)
                res.push_back(matrix[i][right]);
            right--;
            if (top <= buttom) 
            {
                for (int i=right;i>=left;i--)
                    res.push_back(matrix[buttom][i]);
                buttom--;
            }
            
            if (left <= right){
                for (int i=buttom;i>=top;i--)
                    res.push_back(matrix[i][left]);
                left++;
            }
            
        }
        return res;
        }
};
