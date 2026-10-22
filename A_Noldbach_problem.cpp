#include <iostream>
using namespace std;
#include <vector>

bool isPrime(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> primes;

    // Store all prime numbers up to n
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }

    int count = 0;

    // Check neighboring primes
    for (int i = 0; i + 1 < primes.size(); i++)
    {
        int sum = primes[i] + primes[i + 1] + 1;

        if (sum <= n && isPrime(sum))
        {
            count++;
        }
    }

    if (count >= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}