class Solution {
public:
    long long bloomflowers(vector<int>& bloomDay,int day,int k){
        int n=bloomDay.size();
        int bouquets=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                count++;
            if(count==k){
                bouquets++;
                count=0;
            }
            }
            else{
                count=0;
            }
            }
         return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k> (long long)bloomDay.size()){
            return -1;
        }
        int minimum=*min_element(bloomDay.begin(),bloomDay.end());
        int maximum=*max_element(bloomDay.begin(),bloomDay.end());
        int low= minimum;
        int high=maximum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int bouquets=bloomflowers(bloomDay,mid,k);
            if(bouquets>=m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return low;
    }
};