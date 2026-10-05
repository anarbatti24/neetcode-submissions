class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> m;
        std::vector<std::pair<int, int>> v;
        std::vector<int> result; 

        for (auto& n : nums) {
            m[n]++;
        }

        for (auto& iterator : m) {
            v.push_back({iterator.second, iterator.first});
        }

        std::sort(v.begin(), v.end());

        for (int i = 0; i < k; i++) {

            int size = v.size() - 1;

            result.push_back(v[size - i].second);
        }

        return (result);


        
    }
};
