//  Better Sol  -->> TC - O(n+n) , SC - O(3)
class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int n = fruits.size();

        int maxlen = 0;
        int l  = 0 , r  = 0;
        map<int , int> ans;

        while(r < n)
        {
            ans[fruits[r]]++;

            if(ans.size() > 2)
            {
                while(ans.size() > 2)
                {
                    ans[fruits[l]]--;
                    if(ans[fruits[l]] == 0)
                    {
                        ans.erase(fruits[l]);
                    }
                    l++;
                }
                
            }

            if(ans.size() <= 2)
            {
                maxlen = max(maxlen , r-l+1);
            }
            r++;
        }

        return maxlen;
    }
};