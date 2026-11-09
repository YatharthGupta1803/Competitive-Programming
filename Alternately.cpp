#include <iostream>
using namespace std;

#include <vector>

int main()
{

    int n;
    string s;
    cin >> n;
    cin >> s;

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if ((s[i] == s[i - 1]) && flag == true)
        {
            cout << "No" << endl;
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "Yes" << endl;
    }
}