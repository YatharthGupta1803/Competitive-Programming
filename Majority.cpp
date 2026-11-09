#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int county = 0;
    int countn = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "For")
        {
            county++;
        }
        else
        {
            countn++;
        }
    }
    if (county > countn)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}