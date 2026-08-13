#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>

// When not seperated by space it's nothing but a string.
// And because the string is a array of characters, it explicitly says
// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

// Instead of using STOI use the ASCII values to probably calculate.

// IMP FUNDAMENTALS.

int main()
{
    int n;
    string k;

    cin >> n >> k;

    int sum = 0;
    for (char c : k)
    {
        sum += c - '0';
    }

    cout << sum;
}
