class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n; 
        while(low<=high){
             int mid =low+(high-low)/2;
             if(target<=nums[mid]){
                ans = mid;
                high=mid-1;
             }
             else
            low=mid+1;
        }
     return ans;
    }
    int upperbound(vector<int>& nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1; 
        int ans=n;
        while(low<=high){
             int mid =low+(high-low)/2;
            if(target<nums[mid]){
                ans = mid;
                high=mid-1;
             }
             else
            low=mid+1;
        }
     return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int lb=lowerbound(nums,target);
        int up=upperbound(nums,target);
        if(lb==nums.size()|| nums[lb]!=target) return {-1,-1};
        return {lb ,up-1};
    }
};