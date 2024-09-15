class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev = 0;
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
            }else{
                prev = max(prev,cnt);
                cnt=0;
            }
        }
        return max(prev,cnt);
    }
};