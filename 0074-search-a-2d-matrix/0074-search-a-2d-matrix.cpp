class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int s=0;
        int n = rows*cols-1;
        int mid=0;
        while(s<=n) {
            mid = s+(n-s)/2;
            int rowIndex = mid/cols;
            int colIndex = mid%cols;

            if(matrix[rowIndex][colIndex]==target) return true;
            else if(matrix[rowIndex][colIndex]>target) n=mid-1;
            else s=mid+1;
        }
        return false;
    }
};