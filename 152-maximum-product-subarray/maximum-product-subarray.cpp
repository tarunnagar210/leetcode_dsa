class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum=nums[0];
        int minimum=nums[0];
        int n=nums.size();
        int ans= nums[0];
        for(int i=1;i<n;i++){
            int current=nums[i];
            if(current<0) swap(minimum,maximum);
            maximum=max(current,maximum*current);
            minimum=min(current,minimum*current);
            ans=max(ans,maximum);
        }
        return ans;

    }
};