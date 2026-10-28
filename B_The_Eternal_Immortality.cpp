#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    if (b - a >= 10)
    {
        cout << 0 << endl;
    }
    else
    {
        long long ans = 1;
        for (long long i = a + 1; i <= b; i++)
        {
            ans = (ans * (i % 10)) % 10;
        }
        cout << ans << endl;
    }

    return 0;
}