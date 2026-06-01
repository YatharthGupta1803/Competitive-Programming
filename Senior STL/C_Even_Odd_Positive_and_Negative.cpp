#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int n;
    cin >> n;

    int pos = 0, neg = 0, even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > 0)
        {
            pos++;
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if (a == 0)
        {
            even++;
        }
        else
        {
            neg++;
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}