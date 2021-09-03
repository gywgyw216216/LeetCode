class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        int length = nums.size();
        bool flag = false;

        for (int i = 0; i < length - 1; i++)
        {
            int temporality = nums.at(i);

            for (int j = i + 1; j < length; j++)
            {
                if (temporality + nums.at(j) == target)
                {
                    result[0] = i;
                    result[1] = j;
                    flag = true;

                    break;
                }
            }

            if (flag)
                break;
        }

        return result;
    }
};
