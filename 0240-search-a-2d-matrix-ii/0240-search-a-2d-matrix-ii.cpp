class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         setting row and column size
        int row=matrix.size();
        int col=matrix[0].size();
        
//         initializing row and column index
        int rowIndex=0;
        int colIndex=col-1;
        
        while(rowIndex<row && colIndex>=0) {
            
//             current element
            int element=matrix[rowIndex][colIndex];
            
            if(element==target) {
                return 1;
            }
            if(element>target) {
                colIndex--;
            }
            else {
                rowIndex++;
            }
        }
        return 0;
    }
};