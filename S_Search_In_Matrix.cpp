#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<int, bool> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            mp[x] = true;
        }
    }

    int k;
    cin >> k;

    if (mp.contains(k))
        cout << "will not take number";
    else
        cout << "will take number";
}