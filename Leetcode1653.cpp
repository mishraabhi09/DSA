class Solution {
public:
    int minimumDeletions(string s) {
        
      int n = s.size();

      int i = 0;
      int j = n-1;
      int bcnt = 0;
      int acnt = 0;
      int deletion = 0;

      while(i < j)
      {
         for(i = 0; i < n ;i++)
         {
            if(s[i] == 'b')
            {
                 bcnt++;
            }
            else
            {
                acnt += 1;
                deletion = min(deletion + 1 , bcnt);
            }
         }
      }

      return deletion;

    }
};