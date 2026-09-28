class Solution {
public:
    int findmaxEleIndex(vector<vector<int>>& mat,int row,int col){
        int maxEleIndex=-1;
        int maxElement=-1;
        for(int i=0;i<row;i++){
            if(mat[i][col]>maxElement){
                maxElement=mat[i][col];
                maxEleIndex=i;
            }
        }
        return maxEleIndex;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int maxEleIndex=findmaxEleIndex(mat,n,mid);
            int left=(mid-1>=0)? mat[maxEleIndex][mid-1]:-1;
            int right=(mid+1<m)? mat[maxEleIndex][mid+1]:-1;
            if(left<mat[maxEleIndex][mid]&&right<mat[maxEleIndex][mid]){
                return {maxEleIndex,mid};
            }else if(left>mat[maxEleIndex][mid]){
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};