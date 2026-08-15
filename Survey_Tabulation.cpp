#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> mp;
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        for (char &c : s)
            c = tolower(c);

        mp[s]++;
        ans = max(ans, mp[s]);
    }

    cout << ans << endl;
}