class Solution {
public:

    bool check(int cap, int days, vector<int>& weights){
        int c = cap;
        int dC =1;
        for(int i=0; i<weights.size(); i++){
            if(c>=weights[i]){
                c= c-weights[i];
            }else{
                dC++;
                c=cap;
                c-=weights[i];
            }
        }
        if(dC<=days){
            return true;
        }
        return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum=accumulate(weights.begin(),weights.end(),0), max = *max_element(weights.begin(),weights.end());
        int lo = max, hi=sum;
        int cap=sum;

        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(check(mid,days,weights)){
                cap = mid;
                hi=mid-1;
            }else{
                lo = mid+1;
            }
        }
        return cap;
    }
};