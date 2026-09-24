class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1);
        int n1=nums1.size();
        int n2=nums2.size();
        int low=0,high=n1;
        while(low<=high){
            int partition1=(low+high)>>1;
            int partition2=(n1+n2+1)/2-partition1;
            
            int lh1=partition1==0? INT_MIN:nums1[partition1-1]; //lh1=lefthalf of nums1
            int lh2=partition2==0? INT_MIN:nums2[partition2-1]; //lh2=lefthalf of nums2

            int rh1=partition1==n1? INT_MAX:nums1[partition1]; //rh=righthalf of nums1
            int rh2=partition2==n2? INT_MAX:nums2[partition2]; //rh=righthalf of nums2 

            if(lh1<=rh2 && lh2<=rh1){
                if((n1+n2)%2==0) {
                return (max(lh1,lh2)+min(rh1,rh2))/2.0;
                }
                else{
                    return max(lh1,lh2);
                }
            }
                else if (lh1>=rh2){
                    high=partition1-1;
                }
                else{
                    low=partition1+1;
                }          
        }
        return 0.0;
    }
};