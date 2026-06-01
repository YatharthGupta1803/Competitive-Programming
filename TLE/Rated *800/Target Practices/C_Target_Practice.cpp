#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0;
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 1; i < 6; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if ((char)arr[i][j] == 'X')
                {
                    sum += i;
                }
            }
        }
        for (int i = 6; i > 0; i--)
        {
            for (int j = 0; j < 10; j++)
            {
                if ((char)arr[i][j] == 'X')
                {
                    sum += i;
                }
            }
        }
        cout << sum << endl;
    }
}