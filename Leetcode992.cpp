class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        // Get the size of the array
        int n = nums.size();

        // Variable to store the final result
        int count = 0;

        // Loop through all possible starting indices
        for (int i = 0; i < n; i++) {

            // Map to keep track of frequency of elements
            unordered_map<int, int> freq;

            // Loop through all possible ending indices
            for (int j = i; j < n; j++) {

                // Increment frequency of current element
                freq[nums[j]]++;

                // If the number of distinct integers equals k, increment count
                if (freq.size() == k)
                    count++;

                // If it exceeds k, break out
                if (freq.size() > k)
                    break;
            }
        }

        // Return the result
        return count;
    }
};