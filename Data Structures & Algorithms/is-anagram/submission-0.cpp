class Solution {
public:
    bool isAnagram(string s, string t) {

        std::array<int, 26> s_count{0};
        std::array<int, 26> t_count{0};

        for (auto& c : s) {
            s_count[c - 'a']++;
        }

        for (auto& c : t) {
            t_count[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            s_count[i] -= t_count[i];

            if (s_count[i] != 0) {
                return (false);
            }
        }

        return (true);
        
    }
};
