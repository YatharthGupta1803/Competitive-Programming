#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << "Odd" << endl;
        }
        else if (n % 4 == 0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Same" << endl;
        }
    }
}