#include <iostream>
using namespace std;
#include <vector>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int bestL = -1, bestR = -1;

        // Find positions of existing 1s
        vector<int> one;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                one.push_back(i);
        }

        if (one.empty())
        {
            // No existing 1.
            // Use the first and last -1 as endpoints.
            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1)
                {
                    if (bestL == -1)
                        bestL = i;
                    bestR = i;
                }
            }
        }
        else
        {
            // Check gaps between consecutive existing 1s.
            for (int i = 0; i + 1 < one.size(); i++)
            {
                int L = one[i];
                int R = one[i + 1];

                if (R - L > bestR - bestL)
                {
                    bestL = L;
                    bestR = R;
                }
            }

            // Left of the first 1:
            // find the first -1, giving the longest possible segment.
            for (int i = 0; i < one[0]; i++)
            {
                if (a[i] == -1)
                {
                    if (one[0] - i > bestR - bestL)
                    {
                        bestL = i;
                        bestR = one[0];
                    }
                    break;
                }
            }

            // Right of the last 1:
            // find the last -1.
            for (int i = n - 1; i > one.back(); i--)
            {
                if (a[i] == -1)
                {
                    if (i - one.back() > bestR - bestL)
                    {
                        bestL = one.back();
                        bestR = i;
                    }
                    break;
                }
            }
        }

        // If we found two valid endpoints,
        // make everything else 0.
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
                a[i] = 0;
        }

        if (bestL != -1 && bestR != -1 && bestL != bestR)
        {
            a[bestL] = 1;
            a[bestR] = 1;
        }
        else if (bestL != -1 && bestL == bestR)
        {
            // Only one -1 exists.
            a[bestL] = 1;
        }

        for (int x : a)
            cout << x << ' ';

        cout << '\n';
    }

    return 0;
}