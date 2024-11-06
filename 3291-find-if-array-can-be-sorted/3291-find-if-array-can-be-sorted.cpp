class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int pmax = INT_MIN;
        int cmax = nums[0];
        int cmin = nums[0];
        int setBits = countBits(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (setBits == countBits(nums[i])) {
                cmax = max(nums[i], cmax);
                cmin = min(nums[i], cmin);
            } else {
                if (cmin < pmax) {
                    return false;
                }

                pmax = cmax;
                setBits = countBits(nums[i]);
                cmin = nums[i];
                cmax = nums[i];
            }
        }

        return cmin>pmax;
    }

    private:
        int countBits(int num){
            return bitset<32>(num).count();
        }
};