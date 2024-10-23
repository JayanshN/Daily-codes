class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //Edge cases:
    if (nums.size() == 1) return nums[0];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[nums.size() - 1] != nums[nums.size() - 2]) return nums[nums.size() - 1];

    int low = 1, high = nums.size() - 2;
    while (low <= high) {
        int mid = (low + high) / 2;

        
        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
            return nums[mid];
        }

        //we are in the left:
        if ((mid % 2 == 1 && nums[mid] == nums[mid - 1])
                || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
            //eliminate the left half:
            low = mid + 1;
        }
        //we are in the right:
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }

    // dummy return statement:
    return -1;
    }

};