class Solution {
public:
    long long calthreshold(vector<int>& nums,int divisor){
        long long total=0;
        for(int i=0;i<nums.size();i++){
            total+=ceil((nums[i] +divisor-1)/divisor);
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maximum=*max_element(nums.begin(),nums.end());
        int low= 1;
        int high=maximum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int total=calthreshold(nums,mid);
            if(total <=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return low;
    }
};