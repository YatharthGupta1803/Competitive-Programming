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
        string arr;
        cin >> arr;

        bool conti = false;
        int totalc = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == '.' && i < n && arr[i + 1] == '.' && i + 1 < n && arr[i + 2] == '.' && i + 2 < n)
            {
                conti = true;
                break;
            }
            if (arr[i] == '.')
            {
                totalc++;
            }
        }
        if (conti)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << totalc << endl;
        }
    }
}