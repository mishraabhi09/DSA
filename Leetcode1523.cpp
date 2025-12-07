class Solution {
public:
    int countOdds(int low, int high) {
        
      
      int cnt = 0;
      
      long long unsigned i = low;
      long long unsigned j = high;
    
    //   if(i == j) return 0;

      // checking for each number by 2 pointer-->>
      while(i < j)
      {

        if(i % 2 != 0) cnt++;
        if(j % 2 != 0) cnt++;
        i++;
        j--;
        
      }

      // if bychance i & j become equal-->>
      if(i == j && i % 2 != 0)
      {
            cnt++;
      }

      return cnt;

    }
};