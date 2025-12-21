
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        vector<long long> arr(n);
        vector<long long> copy_arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        copy_arr = arr;
        sort(copy_arr.begin(), copy_arr.end());
        if (k > 1 || copy_arr == arr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}