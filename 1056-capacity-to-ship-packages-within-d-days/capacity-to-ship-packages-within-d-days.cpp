class Solution {
public:
    long long cal_capcity(vector<int>& weights, int capcity ){
        int  days_check=1;
        int total=0;
        for(int i=0;i<weights.size();i++){
            if(total+weights[i]>capcity){
                days_check++;
                total=weights[i];
            }
            else{
                total+=weights[i];
            }
        }
        return days_check;
    }
    int shipWithinDays(vector<int>& weights, int days) {
    long long total_sum= accumulate(weights.begin(),weights.end(),0ll);
    int maxi=*max_element(weights.begin(),weights.end());
    int low=maxi;
    int high=total_sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        int days_check=cal_capcity(weights,mid);
        if(days_check<=days){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    }
};