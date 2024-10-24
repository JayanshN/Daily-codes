class Solution {
public:

    bool possible(vector<int>& arr, int m, int day, int k){
        int cnt=0;
        int nB=0;

        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=day){
                cnt++;
            }else{
                nB += (cnt/k);
                cnt=0;
            }
        }
        nB += (cnt/k);
        return nB>=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        long long val = m*1ll*k*1ll;

        if(n<val) return -1;
        
        int maxi=INT_MIN, mini=INT_MAX;

        for(int i=0; i<n; i++){
            maxi=max(bloomDay[i],maxi);
            mini=min(bloomDay[i],mini);
        }
        
        int low=mini, high=maxi;
        while(low<=high){
            int mid = (low+high)/2;

            if(possible(bloomDay,m,mid,k)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return low;
    }
};