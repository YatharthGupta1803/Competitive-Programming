#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n), b(n), c(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        c[i] = a[i] - b[i];

    sort(c.begin(), c.end());

    long long count = 0;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (c[i] + c[j] > 0)
        {

            count += (j - i);
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << count << endl;
}
