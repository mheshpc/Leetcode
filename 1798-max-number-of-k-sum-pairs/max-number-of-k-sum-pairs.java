class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        int numOperations = 0;
        int left = 0;
        int right = nums.length-1;
        while (left < right){
            if (nums[left] + nums[right] < k){
                left++;
                continue;
            } else if (nums[left] + nums[right] > k){
                right--;
                continue;
            } else {
                numOperations++;
                left++;
                right--;
                continue;
            }
        }
        return numOperations;
    }
}