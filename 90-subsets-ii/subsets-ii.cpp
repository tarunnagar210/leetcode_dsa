class Solution {
public:
    void generate(vector<int>& nums,int index,vector<int>&temp,vector<vector<int>>&ans){
        ans.push_back(temp);
        for (int i = index; i < nums.size(); i++) {
            if(i!=index && nums[i]==nums[i-1]) continue; 
            temp.push_back(nums[i]);
            generate(nums, i+ 1, temp, ans);;
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int> temp;
        generate(nums,0,temp,ans);
        return ans;
    }
};