class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // calc the size of rows and columns
        int m=matrix.size();
        int n=matrix[0].size();
        
        //initializing array for 'i' of size m to 0
        int i_arr[m];
        for(int j = 0; j < m; j++)
            {
               i_arr[j] = 0;
            }
        
        //initializing array for 'j' of size n to 0
        int j_arr[n], j_s=0;
        for (int j = 0; j < n; j++)
            {
               j_arr[j] = 0;
            }
        
        //filling i_arr[] and j_arr[] if the element in matrix=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j]==0) {
                    i_arr[i]=1;
                    j_arr[j]=1;
                }
            }
        }
        
        //initializing the elements in the i'th row to 0
        for(int i=0; i<m; i++) {
            if(i_arr[i]!=0) {
                for(int j=0; j<n; j++) {
                    matrix[i][j]=0;
                }
            }
        }
        
        //initializing the elements in the j'th column to 0
        for(int i=0; i<n; i++) {
                        cout<<j_arr[i]<<" ";

            if(j_arr[i]!=0) {
                for(int j=0; j<m; j++) {
                    matrix[j][i]=0;
                }
            }
        }
    }
};