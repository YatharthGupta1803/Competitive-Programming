#include <iostream>
using namespace std;
#include <vector>

int main()
{

    long long n;
    cin >> n;

    long long odd = 0;

    while (n--)
    {
        long long x;
        cin >> x;
        odd += x % 2;
    }

    cout << (odd % 2 == 0 ? "YES" : "NO") << '\n';
}