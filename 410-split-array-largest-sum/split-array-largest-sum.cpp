class Solution {
public:
    int countSubarrays(vector<int>& nums, int maxSum){
        int numbers_split=1;
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            if(totalsum+nums[i]<=maxSum){
                totalsum+=nums[i];
            }
            else{
                totalsum=nums[i];
                numbers_split++;
            }
        }
        return numbers_split;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k) return -1;
        int low=*max_element(nums.begin(),nums.end());
        long long  high=accumulate(nums.begin(),nums.end(),0ll);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int numbers_split=countSubarrays(nums,mid);
            if(numbers_split<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};