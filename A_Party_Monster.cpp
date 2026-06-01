#include <iostream>
using namespace std;

#include <vector>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;

        cin >> s;

        int r = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        if (r == l)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}