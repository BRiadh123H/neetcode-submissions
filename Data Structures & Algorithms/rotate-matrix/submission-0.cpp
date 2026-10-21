class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       if (matrix.empty() || matrix.size()==1) return ;
       vector<vector<int>>resfin;
       for (int i=0;i<matrix[0].size();i++)
       {
        vector <int> res;
            for (int j=matrix.size()-1;j>=0;j--)
            {
                res.push_back(matrix[j][i]);
            }
            resfin.push_back(res);
       }
       for (int j=0;j<matrix.size();j++)
       {
            for (int i=0;i<matrix[0].size();i++)
            {
                matrix[j][i]=resfin[j][i];
            }    
       }
    }
};
