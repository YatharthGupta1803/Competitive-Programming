#include <iostream>
using namespace std;
#include <string>

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'A' || s[i] == 'a')
        {
            continue;
        }
        s[i] = '.';
    }
    cout << s;
}