#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int n, a, b;
    cin >> n >> a >> b;

    int total = a + b;
    int rem = n % total;
    if (rem == 0)
    {
        cout << b * (n / total);
    }
    else
    {
        int ans = b * (n / total);
        ans += rem - b;
        cout << ans << endl;
    }
}