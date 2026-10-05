class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> result;

        for (int i = 0; i < nums.size(); i++) {
            
            if (result.contains(target - nums[i])) {
                
                int max = std::max(i, result[target - nums[i]]);
                int min = std::min(i, result[target - nums[i]]);
                return {min, max};
            }


            result[nums[i]] = i;
        }
        
        return {};
    }
};
