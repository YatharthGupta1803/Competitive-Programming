#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int current = 0, maxCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                current++;
                maxCount = max(maxCount, current);
            }
            else
            {
                current = 0;
            }
        }

        cout << maxCount << endl;
    }
    return 0;
}
