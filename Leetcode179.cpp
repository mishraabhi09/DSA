// Use the better approach -->>
class Solution {
public:
    string largestNumber(vector<int>& nums) {

        //   int n = nums.size();

        //   // reversing the Array-->>
        //   reverse(nums.begin() , nums.end());

        //   string ans = "";

        //   for(int i = 0 ; i < n; i++)
        //   {
        //      if((nums[i] + nums[i+1]) > (nums[i+1] + nums[i]))
        //      {
        //         ans = to_string(nums[i]) + to_string(nums[i+1]);
        //      }
        //      else
        //      {
        //         ans = to_string(nums[i+1]) + to_string(nums[i]);
        //      }
        //   }

        //   return ans;

        int n = nums.size();

        // STEP 1: int → string
        vector<string> v;
        for (int i = 0; i < n; i++) {
            v.push_back(to_string(nums[i]));
        }

        // STEP 2: custom sort (THIS replaces reverse + loop)
        sort(v.begin(), v.end(),
             [](string a, string b) { return a + b > b + a; });

        // STEP 3: build answer
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += v[i];
        }

        // STEP 4: handle all zeros case
        if (ans[0] == '0')
            return "0";

        return ans;
    }
};