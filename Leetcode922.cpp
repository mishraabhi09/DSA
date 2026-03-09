class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        int n = nums.size();

        int left = 0;        // even index
        int right = 1;       // odd index

        // while ki condition bhi bhot imp hai-->>
        // while(left < right) -->> galat hai
        // kyuki yaha 2 pointer alg tareeke se lag rahe yha
        while (left < n && right < n) {

            if (nums[left] % 2 == 0)
                left += 2;
            else if (nums[right] % 2 == 1)
                right += 2;
            else {
                swap(nums[left], nums[right]);
                left += 2;
                right += 2;
            }
        }

        return nums;
    }
};