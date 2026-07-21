#include <iostream>
using namespace std;

void solve()
{
    int n;
    while (cin >> n)
    {
        if (n == 1999)
        {
            cout << "Correct\n";
            break;
        }
        else
        {
            cout << "Wrong\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}