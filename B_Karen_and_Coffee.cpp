#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> arr(200001, 0);
    while (n--)
    {
        int li, ri;
        cin >> li >> ri;
        arr[li] += 1;
        arr[ri + 1] += -1;
    }
    for (int i = 1; i < 200000; i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 1; i < 200000; i++)
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
    for (int i = 1; i < 200000; i++)
    {
        arr[i] += arr[i - 1];
    }
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << endl;
    }
}