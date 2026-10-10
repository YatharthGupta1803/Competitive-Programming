#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n, q;
    cin >> n >> q;

    vector<vector<int>> vec(n, vector<int>(n, 0));
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int t, x1, x2, y1, y2;
        cin >> t;
        if (t == 1)
        {
            cin >> x1 >> y1;
            vec[x1][y1] = 1;
            arr[x1]++;
            arr[y1]++;
        }
        if (t == 2)
        {
            cin >> x1 >> y1;
            vec[x1][y1] = 0;
            arr[x1]--;
            arr[y1]--;
        }
        else
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (arr[x2] >)
        }
    }
}