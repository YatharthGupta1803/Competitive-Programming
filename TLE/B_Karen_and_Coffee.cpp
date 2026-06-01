#include <iostream>
using namespace std;
#include <vector>

int main()
{
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> arr(200001, 0);
    while (n--)
    {
        long long li, ri;
        cin >> li;
        cin >> ri;
        arr[li] += 1;
        arr[ri + 1] -= 1;
    }
    for (long long i = 1; i <= 200000; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (long long i = 0; i <= 200000; i++)
    {
        if (arr[i] >= k)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (long long i = 1; i <= 200000; i++)
    {
        arr[i] += arr[i - 1];
    }
    while (q--)
    {
        long long a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }
}
