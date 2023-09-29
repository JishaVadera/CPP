#include <iostream>
using namespace std;

int main()
{
    float i, n, a = 0.5;

    cout << "enter value: ";
    cin >> n;
    cout << a << ", ";

    for (i = 0.5; i <= n; i++)
    {
        a += i * 1;
        cout << a << ", ";
    }
    return 0;
}