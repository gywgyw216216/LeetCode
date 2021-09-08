class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        int size = nums.length;
        
        for(int i = 0; i < size - 1; i++)
        {
            int temporality = nums[i];
            
            for(int j = i + 1; j < size; j++)
            {
                if(temporality + nums[j] == target)
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
