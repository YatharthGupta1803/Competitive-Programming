#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<vector<int>> mat(h, vector<int>(w, 0));
    char c;
    x--;
    y--;
    h--;
    w--;

    vector<int> sumv(h);
    vector<int> sumh(w);
    int sum = 0;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {

            cin >> c;
            if (c == '#')
            {
                mat[i][j] = 0;
            }
            else
            {
                mat[i][j] = 1;
                sum += 1;
            }
        }
        sumv[i] = sum;
        sum = 0;
    }

    for (int c = 0; c < y; ++c)
    {
        for (int r = 0; r < h; r++)
        {
            sum += mat[r][y];
        }
    }
    int ans = sumv[x] + sum;
    ans -= mat[x][y];

    cout << ans;
}