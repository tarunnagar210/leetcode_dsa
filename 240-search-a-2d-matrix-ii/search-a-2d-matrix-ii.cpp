class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n=matrix.size();
       int m=matrix[0].size();
       int row=0;
       int col=m-1;
       while(row<n&&col>=0){
        int current=matrix[row][col];
        if(current==target){
            return true;
        }
        if(current>target){
           col--;
        }else{
            row++;  
        }
       }
       return false;
    }
};