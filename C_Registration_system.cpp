#include <iostream>
using namespace std;
#include <string>
#include <map>

int main()
{

    int t;
    cin >> t;
    map<string, long long> mp;
    while (t--)
    {
        string s;
        cin >> s;

        mp[s]++;
        if (mp[s] == 1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << mp[s] - 1 << endl;
        }
    }
}