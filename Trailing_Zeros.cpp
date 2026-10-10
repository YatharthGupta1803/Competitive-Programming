#include <iostream>
using namespace std;
#include <climits>

int main()
{

    long long n;
    cin >> n;
    long long count = 0;
    while (n > 0)
    {
        count += n / 5;
        n /= 5;
    }
    cout << count;
}