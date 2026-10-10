#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int L = -1;

        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                L = i;
                break;
            }
        }

        int R = -1;
        for (int i = n - 1; i > 0; i--)
        {
            if (A[i - 1] > A[i])
            {
                R = i;
                break;
            }
        }

        if (L == R)
        {
            cout << -1 << endl;
        }
        else
        {
        }
    }
}