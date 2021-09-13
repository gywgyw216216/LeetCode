class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        const unsigned short length = nums.size();

        for (unsigned short i = 0; i < length - 1; i++)
        {
            int temporality = nums[i];

            for (unsigned short j = i + 1; j < length; j++)
            {
                if (temporality + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;

                    return result;
                }
            }
        }

        return result;
    }
};
