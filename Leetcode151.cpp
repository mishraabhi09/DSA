class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int i = 0, n = s.size();

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++; // skip spaces

            if (i >= n)
                break;

            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            words.push_back(word);
        }

        string ans = "";
        for (int j = words.size() - 1; j >= 0; j--) {
            ans += words[j];
            if (j != 0)
                ans += " ";
        }

        return ans;
    }
};