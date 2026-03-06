// Heap sort method -->> TC - o(nlogk) , SC - o(n)
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();

        // make a min Heap-->>
        priority_queue<int, vector<int>, greater<int>> minheap;

        // traverse the array-->>
        for (int i = 0; i < n; i++) {
            minheap.push(nums[i]);
        }

        vector<int> res;

        while (!minheap.empty()) {
            res.push_back(minheap.top());
            minheap.pop();
        }

        return res;
    }
};