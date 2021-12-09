class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        number = {}

        for i in range(len(nums)):
            if nums[i] not in number:
                number[nums[i]] = i

            if target - nums[i] in number and number[target - nums[i]] != i:
                result.append(number[target - nums[i]])
                result.append(i)

                return result

        return result
