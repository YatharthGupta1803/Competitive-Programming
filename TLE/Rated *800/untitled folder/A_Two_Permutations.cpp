#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b + 2 <= n || a == b == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}