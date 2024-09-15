import java.util.Arrays;
import java.util.Scanner;

class Solution {
    public static int[] twoSum(int[] nums, int target) {
            for (int i=0; i<nums.length; i++){
                for(int j=1; j<nums.length; j++){
                    if(nums[i]+nums[j]==target && i!=j){
                        return new int[]{i, j};
                    }
                }
            }
            return new int[]{};
    }

    public static void main(String[] args) {
        int[] nums,ans;
        int target;

        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] tokens = line.split(" ");
        nums = new int[tokens.length];
        for (int i=0; i<nums.length;i++)
            nums[i] = Integer.parseInt(tokens[i]);
        target = sc.nextInt();

        ans=twoSum(nums,target);
        System.out.println(Arrays.toString(ans));
    }
}