class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_map<int, int> map; 

        for (auto& n : nums) {

            map[n]++;

            if (map[n] > 1) {
                return (true);
            }

        }

        return (false);
        
    }
};