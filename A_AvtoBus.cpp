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

        if (n % 2 != 0 || n == 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            n /= 2;
            cout << (n + 3 - 1) / 3 << " " << n / 2 << endl;
        }
    }
}