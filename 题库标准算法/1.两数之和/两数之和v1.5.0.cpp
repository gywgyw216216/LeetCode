class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        const unsigned short length = nums.size();

        for (unsigned short i = 0; i < length - 1; i++)
        {
            int temporality = nums[i];

            for (unsigned short j = i + 1; j < length; j++)
            {
                if (temporality + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);

                    return result;
                }
            }
        }

        return result;
    }
};
