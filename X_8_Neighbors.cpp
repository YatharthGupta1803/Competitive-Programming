#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    int x, y;
    cin >> x >> y;

    x--;
    y--;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Check only neighbours inside the grid
        if (nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if (grid[nx][ny] != 'x')
            {
                cout << "no\n";
                return 0;
            }
        }
    }

    cout << "yes\n";
    return 0;
}