class Solution {
public:

    int checksum(vector<int>& nums, int d){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil((double)nums[i]/(double)d);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int maxi = *max_element(nums.begin(),nums.end());

        int low=1, high=maxi;

        while(low<=high){
            int mid=(low+high)/2;

            if(checksum(nums,mid)<=threshold){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};