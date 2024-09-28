class Solution {
public:

    void markRow(int rowIndex, int n, vector<vector<int>>& matrix){
        for(int i=0; i<n; i++){
            if(matrix[rowIndex][i] != 0){
                matrix[rowIndex][i] = -999;
            }
        }
    }

    void markCol(int colIndex, int m, vector<vector<int>>& matrix){
        for(int i=0; i<m; i++){
            if(matrix[i][colIndex] != 0){
                matrix[i][colIndex] = -999;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    markRow(i,n,matrix);
                    markCol(j,m,matrix);
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == -999){
                    matrix[i][j] = 0;
                }
            }
        }


    }

};