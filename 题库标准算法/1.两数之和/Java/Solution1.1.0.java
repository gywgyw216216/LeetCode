class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        HashMap<Integer, Short> number = new HashMap<>();

        for (short i = 0; i < nums.length; i++)
        {
            if (!number.containsKey(nums[i]))
            {
                number.put(nums[i], i);
            }

            if (number.containsKey(target - nums[i]) && number.get(target - nums[i]) != i)
            {
                result[0] = number.get(target - nums[i]);
                result[1] = i;

                return result;
            }
        }

        return result;
    }
}
