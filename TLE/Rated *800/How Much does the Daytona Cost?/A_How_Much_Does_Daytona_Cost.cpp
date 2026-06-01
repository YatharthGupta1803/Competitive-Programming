#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        bool found = false;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == k)
            {
                found = true;
            }
        }
        if (!found)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}