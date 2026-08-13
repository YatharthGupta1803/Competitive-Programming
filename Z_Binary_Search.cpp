#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void bsa(int n, vector<int> &v)
{
    int low = 0;
    int high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (n > v[mid])
        {
            low = mid + 1;
        }
        else if (n < v[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << "found\n";
            return;
        }
    }

    cout << "not found\n";
}

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    while (k--)
    {
        int m;
        cin >> m;
        bsa(m, arr);
    }
}