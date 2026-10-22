#include <iostream>
using namespace std;

#include <vector>

int main()
{

    long long n, m;
    cin >> n >> m;

    long long arr[5] = {0};
    long long brr[5] = {0};

    for (long long i = 1; i <= n; i++)
    {
        arr[i % 5]++;
    }
    for (int i = 1; i <= m; i++)
    {
        brr[i % 5]++;
    }

    long long ans = 0;

    for (long long i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            ans += arr[i] * brr[i];
        }
        else
        {
            ans += arr[i] * brr[5 - i];
        }
    }
    cout << ans << endl;
}