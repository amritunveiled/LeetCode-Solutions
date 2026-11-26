class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool r0Zero = false;
        bool c0Zero = false;

    
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (matrix[row][col] == 0) {
                    matrix[0][col] = 0; 
                    matrix[row][0] = 0;
                    if (row == 0) r0Zero = true;
                    if (col == 0) c0Zero = true;
                }
            }
        }

        for (int row = 1; row < n; row++) {
            for (int col = 1; col < m; col++) {
                if (matrix[0][col] == 0 || matrix[row][0] == 0) {
                    matrix[row][col] = 0;
                }
            }
        }
        
        if (r0Zero) {
            for (int col = 0; col < m; col++) matrix[0][col] = 0;
        }

        if (c0Zero) {
            for (int row = 0; row < n; row++) matrix[row][0] = 0;
        }
    }
};