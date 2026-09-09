class Solution {
public:
    int searchrange(vector<int>& piles){
        int maximum=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maximum=max(maximum,piles[i]);
        }
        return maximum;
    }
   long long hourcalculate(vector<int>& piles ,int hourly){
        long long totalhours=0;
       for(int i=0;i<piles.size();i++){
        totalhours += (piles[i] + hourly - 1) / hourly;
       }
       return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=searchrange(piles); 
        while(low<=high){
            int mid =low+(high-low)/2;
            long long totalhours=hourcalculate( piles ,mid);
            if(totalhours<=h){
                high=mid-1;
            }
            else{
              low=mid+1;
            }
        }
        return low;
    }
};