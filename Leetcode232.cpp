class Solution {
public:
    bool isAnagram(string s, string t) {
        
    //sort both the Strings-->>
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());

    //storing the length of string-->>
    int n = s.length();
    int m = t.length();

    // the logic below is only works for comparing each character-->>

    // for(int i = 0; i < n ; i++)
    // {
    //     char s1 = s[i];
    //     for(int j = 0; j < m ; j++)
    //     {
    //         char t1 = t[j];
    //         if(s1 == t1)
    //         {
    //             return true;
    //         }
    //     }
    // }

    if(n != m) return false;

    return (s==t);

    }
};