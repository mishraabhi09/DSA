class Solution {
private:
    unordered_map<string, string> mp;
    int id = 0;
    string base = "http://tinyurl.com/";

public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        id++;
        string shortUrl = base + to_string(id);
        mp[shortUrl] = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};