#include <iostream>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        // Case 1: n is even. Split (n-1) into two consecutive numbers.
        cout << (n - 1) / 2 << " " << (n - 1) / 2 + 1 << " 1\n";
    }
    else
    {
        // Case 2: n is odd. Find the midpoint of (n-1).
        long long mid = (n - 1) / 2;

        if (mid % 2 == 0)
        {
            // Midpoint is even: step out by 1
            cout << mid - 1 << " " << mid + 1 << " 1\n";
        }
        else
        {
            // Midpoint is odd: step out by 2
            cout << mid - 2 << " " << mid + 2 << " 1\n";
        }
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}