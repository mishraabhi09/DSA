#include <iostream>
using namespace std;

// main function to reverse the Integer-->>
int reverse(long long x)
{

    // sign stores the sign of x in the starting-->>
    int sign = ((x < 0) ? -1 : 1);
    // abs functions stores the absolute value of x-->>
    x = abs(x);

    long long reverse = 0;
    while (x > 0)
    {
        int ld = x % 10;
        x = x / 10;

        // check overflow cases-->>
        if (reverse > INT_MAX / 10)
            return 0;
        if ((reverse == INT_MAX / 10) && ld > 7)
            return 0;

        reverse = (reverse * 10) + ld;
    }

    return sign * reverse;
}