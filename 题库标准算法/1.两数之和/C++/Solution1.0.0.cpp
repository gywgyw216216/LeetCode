class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result(2);
        const unsigned short length = (unsigned short)nums.size();

        for(unsigned short i = 0; i < length - 1; i++)
        {
            for(unsigned short j = (unsigned short)(i + 1); j < length; j++)
            {
                if(nums[i] + nums[j] == target)
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
