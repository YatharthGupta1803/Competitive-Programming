#include <iostream>
using namespace std;

#include <map>

int main()
{
    map<int, int> mp;
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            long long y;
            cin >> y;
            mp[y]++;
        }
        else if (x == 2)
        {
            long long y;
            cin >> y;
            cout << mp[y] << endl;
        }
    }
}
