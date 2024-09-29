class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // Check if the matrix is empty
        if(matrix.empty()) return {};
        
        int m = matrix.size();       // Number of rows
        int n = matrix[0].size();    // Number of columns
        vector<int> ans;             // To store the result

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        // Traverse the matrix in spiral order
        while (top <= bottom && left <= right) {
            // Traverse from left to right across the top row
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++; // Move the top boundary down

            // Traverse from top to bottom along the right column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary left

            // Traverse from right to left across the bottom row (if applicable)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // Move the bottom boundary up
            }

            // Traverse from bottom to top along the left column (if applicable)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }

        return ans;
    }
};
