// reverse the string
class Solution {
public:
    void reverseString(vector<char>& s) {

      stack<char> st;

      int n = s.size();

      int i;

      //pushing all the characters of string into stack:st
      for(i = 0 ; i < n ; i++)
      {
         st.push(s[i]);
      }

      // take back all the characters of stack into the string again
      // in reverse order
      for(i = 0 ; i < n ; i++)
      {
        s[i] = st.top();
        st.pop();
      }
   
    // 2nd method-->> Direct
    // reverse(s.begin() , s.end());

    }
};