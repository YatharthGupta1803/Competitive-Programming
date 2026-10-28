#include <iostream>
using namespace std;

// Helper function to check if a number is prime
bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    long long d;
    cin >> d;

    // Find the first prime p1 >= 1 + d
    long long p1 = 1 + d;
    while (!isPrime(p1))
    {
        p1++;
    }

    // Find the second prime p2 >= p1 + d
    long long p2 = p1 + d;
    while (!isPrime(p2))
    {
        p2++;
    }

    // The smallest valid number is the product of these two primes
    cout << p1 * p2 << "\n";
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}