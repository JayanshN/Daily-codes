class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int max_cnt = 0;
        int last = INT_MIN;

        if(nums.size() == 0){
            return 0;
        }

        for(int i=0; i<nums.size(); i++){
           if(nums[i]-1 == last){
            cnt+=1;
            last = nums[i];
           }else if(nums[i] != last ){
                cnt=1;
                last=nums[i];
           }
           max_cnt = max(max_cnt,cnt);
        }
        return max_cnt;

    }
};