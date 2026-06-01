#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double n;
    cin >> n;
    double pi = 3.141592653;
    double ans = pi * n * n;
    cout << fixed << setprecision(9);
    cout << ans << endl;
    return 0;
}