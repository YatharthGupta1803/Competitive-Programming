#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> factors;

    for (int i = 2; i <= n / i && factors.size() < k - 1; i++)
    {
        while (n % i == 0 && factors.size() < k - 1)
        {
            factors.push_back(i);
            n /= i;
        }
    }

    // The remaining n becomes the final factor.
    if (n > 1)
    {
        factors.push_back(n);
    }

    if (factors.size() != k)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int factor : factors)
        {
            cout << factor << " ";
        }
        cout << endl;
    }

    return 0;
}