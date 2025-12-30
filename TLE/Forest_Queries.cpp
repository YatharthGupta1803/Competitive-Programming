#include <iostream>
using namespace std;

#include <vector>

int main()
{

    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
            if (s[j] != '.')
            {
                a[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0)
            {
                a[i][j] += a[i][j - 1];
            }
            if (i > 0)
            {
                a[i][j] += a[i - 1][j];
            }
            if (i > 0 && j > 0)
            {
                a[i][j] -= a[i - 1][j - 1];
            }
        }
    }

    /* for (auto it : a)
    {
        for (auto i : it)
            cout << i << " ";
        cout << endl;
    } */
    while (q--)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--;
        y2--;
        x1--;
        x2--;
        int ans = a[y2][x2];
        if (x1 > 0)
        {
            ans -= a[y2][x1 - 1];
        }
        if (y1 > 0)
        {
            ans -= a[y1 - 1][x2];
        }
        if (y1 > 0 && x1 > 0)
        {
            ans += a[y1 - 1][x1 - 1];
        }

        cout << ans << endl;
    }
}