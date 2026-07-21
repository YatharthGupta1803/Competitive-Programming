#include <iostream>
using namespace std;

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

int main()
{
    long long N;
    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}