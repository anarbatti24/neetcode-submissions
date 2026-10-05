class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<std::string, std::vector<std::string>> result;
        std::vector<std::vector<std::string>> masterList;

        for (auto& word : strs) {

            std::string copyWord = word;
            std::sort(word.begin(), word.end());

            result[word].push_back({copyWord});

        }

        for (auto iterator : result) {

            masterList.push_back({iterator.second});
        }

        return (masterList);

    }
};
