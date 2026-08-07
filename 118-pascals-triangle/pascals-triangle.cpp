class Solution {
public:
        vector<int> getRow(int rowIndex) {
        vector<int> ansrow;
        long long number=1;
        ansrow.push_back( number);
        for(int i=0;i<rowIndex ;i++){
            number= number*(rowIndex-i);
             number= number/(i+1);
            ansrow.push_back(number);
        }
        return ansrow;
        }
       vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
        for (int i=0;i<numRows;i++) {
        ans.push_back(getRow(i)); 
        }
        return ans;
       }
};