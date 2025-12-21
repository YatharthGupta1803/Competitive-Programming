#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int digits = 0;
        while (num > 0)
        {
            digits++;
            num = num / 10;
        }
    }
}