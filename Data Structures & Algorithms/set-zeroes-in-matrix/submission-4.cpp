class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n =matrix[0].size();
        bool firstcol=false;
        bool firstrow=false;
        for (int r=0;r<n;r++){
            if (matrix[0][r] == 0) {
                firstrow=true;
                break;
            }
        }
        for (int r=0;r<m;r++){
            if (matrix[r][0] == 0) {
                firstcol=true;
                break;
            }
        }
        for (int r=1;r<m;r++){
            for (int c=1;c<n;c++){
                if (matrix[r][c] == 0) {
                    matrix[r][0]=0;
                    matrix[0][c]=0;
                }
            }  
        }
        for (int r=1;r<m;r++){
            for (int c=1;c<n;c++){
                if (matrix[r][0]==0 || matrix[0][c]==0){
                    matrix[r][c] = 0 ;    
                }
            }  
        }
        if (firstrow) {
            for (int j = 0; j < n; ++j) {
                matrix[0][j] = 0;
            }
        }

        
        if (firstcol) {
            for (int i = 0; i < m; ++i) {
                matrix[i][0] = 0;
            }
        }
        
        return ;
}
};
