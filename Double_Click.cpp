#include <iostream>
using namespace std;

#include <vector>

int main()
{
    long long n, d;
    cin >> n >> d;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - arr[i - 1];
        if (diff <= d)
        {
            flag = true;
            cout << arr[i];
            break;
        }
    }
    if (flag == false)
    {
        cout << -1 << endl;
    }
}