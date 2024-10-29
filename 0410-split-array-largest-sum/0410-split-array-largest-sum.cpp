class Solution {
public:

    int countP(vector<int>& arr, int cap){
        int partions=1;
        long long sum =0;

        for(int i=0; i<arr.size(); i++){
            if(sum + arr[i] <=cap){
                sum+=arr[i];
            }else{
                partions++;
                sum=arr[i];
            }
        }
        return partions;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid =(low+high)/2;
            int partions = countP(nums,mid);

            if(partions>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};