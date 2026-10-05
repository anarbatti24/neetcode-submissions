class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        std::set<int> solution;
        int maxCounter = 0;
        int counter = 1;

        for (int n : nums) {
            solution.insert(n);
        }

        for (auto i = solution.begin(); i != solution.end(); i++) {
            if (solution.contains(*(i) + 1)) {
                counter++;
            }
            else {
                if (maxCounter < counter) {
                    maxCounter = counter;
                }
                counter = 1;
            }
        }
        return (maxCounter);
    }
};
