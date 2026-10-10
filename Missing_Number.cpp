#include <iostream>
using namespace std;
#include <vector>

int main()
{

    long long n;
    cin >> n;
    long long tt = n * (n + 1);
    tt = tt / 2;

    long long sum = 0;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << tt - sum << endl;
}