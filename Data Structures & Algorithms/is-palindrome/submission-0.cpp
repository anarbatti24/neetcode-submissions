class Solution {
public:
    bool isPalindrome(string s) {

        std::string cleanedString;

        for (char& c : s) {
            if (c >= 97 && c <= 122 || c >= 48 && c <= 57) {
                cleanedString += c;
            }
            else if (c >= 65 && c <= 90) {
                cleanedString += static_cast<char> (c + 32);
            }
        }


        for (int i = 0; i < cleanedString.length(); i++) {

            int lastCharPosition = cleanedString.size() - 1;

            if (cleanedString.at(i) != cleanedString.at(lastCharPosition - i)) {
                return (false);
            }
        }

        return (true);
        
    }
};
