#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i = 0, j = n - 1;

        while (i < j && s[i] != s[j])
        {
            i++;
            j--;
        }

        int remaining = j - i + 1;
        if (remaining < 0)
            remaining = 0;

        cout << remaining << endl;
    }
    return 0;
}
