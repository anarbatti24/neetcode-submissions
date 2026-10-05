class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        std::unordered_set<int> solution;
        int maxCounter = 0;
        int counter = 1;

        for (int n : nums) {
            solution.insert(n);
        }

        for (int n : solution) {
            if (!solution.contains(n - 1)) {
                counter = 1;

                while (solution.contains(n + counter)) {
                    counter++;
                }

                maxCounter = std::max(maxCounter, counter);
            }

        }

        return (maxCounter);
    }
};
