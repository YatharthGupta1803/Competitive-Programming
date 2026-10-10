
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long maxOdd = -1, secondOdd = -1;
    long long maxEven = -1, secondEven = -1;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (x % 2 == 0)
        {
            if (x > maxEven)
            {
                secondEven = maxEven;
                maxEven = x;
            }
            else
            {
                secondEven = max(secondEven, x);
            }
        }
        else
        {
            if (x > maxOdd)
            {
                secondOdd = maxOdd;
                maxOdd = x;
            }
            else
            {
                secondOdd = max(secondOdd, x);
            }
        }
    }

    long long ans = -1;

    if (secondOdd != -1)
    {
        ans = max(ans, maxOdd + secondOdd);
    }

    if (secondEven != -1)
    {
        ans = max(ans, maxEven + secondEven);
    }

    cout << ans << '\n';

    return 0;
}
