class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int x = n / 3+1; 
        int count1=0,count2=0;
        int el1= INT_MIN;
        int el2= INT_MIN;
        vector<int>res;
        for(int i=0;i<n;i++){
            if (count1==0 && el2!=nums[i]){
               el1=nums[i]; 
               count1++;
            } 
            else if(count2==0&& el1!=nums[i]){
                el2=nums[i]; 
                count2++;
            }
            else if(nums[i] == el1) count1++;
            else if(nums[i] == el2) count2++;
            else {
                count1--;
                count2--;
            }

        }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1)
                count1++;
            if(nums[i]==el2)
                count2++;
        }
        if(count1>=x) res.push_back(el1);
        if(count2>=x)res.push_back(el2);
        
             return res;
 
    }
};