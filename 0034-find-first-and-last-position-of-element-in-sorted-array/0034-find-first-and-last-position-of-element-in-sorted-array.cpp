class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res ={-1,-1};
        int left = search(nums,target,true);
        int right = search(nums,target,false);
        res[0]=left;
        res[1]=right;
        return res;
    }
    int search(vector<int> nums, int target, bool is_search_left){
        int low=0;
        int high=nums.size()-1;
        int ans =-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]>target){
                high = mid-1;
            }else if(nums[mid]<target){
                low = mid+1;
            }else{
                ans=mid;
                if(is_search_left){
                    high=mid-1;
                }else{
                    low = mid+1;
                }
            }
        }
        return ans;
    }
};