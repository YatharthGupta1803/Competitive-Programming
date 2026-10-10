#include <iostream>
using namespace std;

#include <vector>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;

        if (n & (n - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}