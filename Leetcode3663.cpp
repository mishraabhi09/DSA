class Solution {
public:
    int getLeastFrequentDigit(int n) {

        // traverse thorugh n;
        // base case
        if (n = 0)
            return 0;

        int minfreq = INT_MAX;
        int ans = -1;

        unordered_map<int, int> mpp;

        while (n > 0) {
            int digit = n % 10;
            mpp[digit]++;
            n = n / 10; // digit extraction
        }

        for (auto it = mpp.begin(); it != mpp.end(); it++) {

            int num = it->first;
            int count = it->second;

            // ye case freq handle karne ke liye
            // jiski kam hogi vo update hota rahega yaha se
            if (count < minfreq) {
                minfreq = count;
                ans = num;
            // but ye most imp hai, tie break hai
            // kyuki jab 2 ele. ke freq same hai to min ya max ele 
            // nikalne ke liye ye use hota haii.
            } else if (count == minfreq) {
                ans = min(ans, num);
            }
        }

        return ans;
    }
};