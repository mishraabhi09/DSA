class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
      // Using Priority Queue Method-->>

      priority_queue<int , vector<int> , greater<int>> ans;

      int n = nums.size();

      // inserting all the ele. in the ans;

      for(int i : nums)
      {
         ans.push(i);

         if(ans.size() > k)
         {
            ans.pop();
         }
      }

      return ans.top();

    }
};