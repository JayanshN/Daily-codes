class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int d = matrix.size()-1;
        int r = matrix[0].size()-1;
        int u=0,l=0,i=0,j=0,n=0;
        int a = (r+1)*(d+1);
        vector<int> list;
        while(true){
            while(j<=r){
                list.push_back(matrix[i][j]);
                n++;
                j++;
            }
            if(n==a){
                break;
            }
            u++;
            j--;
            i=u;
            while(i<=d){
                list.push_back(matrix[i][j]);
                n++;
                i++;
            }
            if(n==a){
                break;
            }
            r--;
            i--;
            j=r;
            while(j>=l){
                list.push_back(matrix[i][j]);
                n++;
                j--;
            }
            if(n==a){
                break;
            }
            d--;
            j++;
            i=d;
            while(i>=u){
                list.push_back(matrix[i][j]);
                n++;
                i--;
            }
            if(n==a){
                break;
            }
            l++;
            i++;
            j=l;
        }
        return list; 
    }
};