class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_ele = m*n;

        int startingRow = 0;
        int endingColumn = n-1;
        int endingRow = m-1;
        int startingColumn = 0;

        int count = 0;

        while(count < total_ele) {
            // print starting row
            for(int i=startingColumn; i<=endingColumn && count<total_ele; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // print ending column
            for(int i=startingRow; i<=endingRow && count<total_ele; i++) {
                ans.push_back(matrix[i][endingColumn]);
                count++;
            }
            endingColumn--;

            // print ending row
            for(int i=endingColumn; i>=startingColumn && count<total_ele; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // print starting column
            for(int i=endingRow; i>=startingRow && count<total_ele; i--) {
                ans.push_back(matrix[i][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return ans;
    }
};