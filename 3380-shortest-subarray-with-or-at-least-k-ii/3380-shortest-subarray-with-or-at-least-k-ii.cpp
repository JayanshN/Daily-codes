class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int> bitCount(32,0);
        int curOR =0;
        int left =0;
        int minLength = INT_MAX;

        for(int right =0; right<n; right++){
            curOR |= nums[right];

            for(int bit=0; bit<32; bit++){
                if(nums[right] & (1<<bit)){
                    bitCount[bit]++;
                }
            }

            while(left <= right && curOR >= k){
                minLength = min(minLength, right-left+1);

                int updateOR =0;
                for(int bit=0; bit<32; bit++){
                    if(nums[left] & (1<<bit)){
                        bitCount[bit]--;
                    }
                    if(bitCount[bit]>0){
                        updateOR |= (1<<bit);
                    }
                }
                curOR = updateOR;
                left++;
            }
        }

        return minLength == INT_MAX ? -1:minLength;
    }
};