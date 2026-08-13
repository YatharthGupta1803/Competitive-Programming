#include <iostream>
using namespace std;

#include <string>

int main()
{
    string s;
    cin >> s;
    string y = "hello";
    int i = 0;
    int j = 0;

    while (i < s.length())
    {
        if (y[j] == s[i])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
        if (j == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}