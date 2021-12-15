class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];

        for (short i = 0; i < nums.length - 1; i++)
        {
            for (short j = (short) (i + 1); j < nums.length; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;

                    return result;
                }
            }
        }

        return result;
    }
}
