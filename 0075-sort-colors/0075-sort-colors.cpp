class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            int current = nums[i];
            int j = i-1;
            while(j>=0 && nums[j]>current )
            {
                nums[j+1]= nums[j];
                j--;
            }
            nums[j+1]=current;
        }
    }
};