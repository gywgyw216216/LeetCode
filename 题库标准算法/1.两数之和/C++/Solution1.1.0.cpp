class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        map<int, unsigned short> number;
        const unsigned short length = nums.size();

        for(unsigned short i = 0; i < length; i++)
        {
            if(number.find(nums[i]) == number.end())
                number[nums[i]] = i;

            if(number.find(target - nums[i]) != number.end() && number[target - nums[i]] != i)
            {
                result[0] = number[target - nums[i]];
                result[1] = i;

                return result;
            }
        }

        return result;
    }
};
