#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int h, w;
    cin >> h >> w;
    int count = 0;
    while (h--)
    {

        string s;
        cin >> s;

        for (int i = 0; i < w; i++)
        {
            if (s[i] == '#')
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
