#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "enter value: ";
    cin >> n;

    while (n >= i)
    {
        cout << n << ' ';
        n--;
    }
    return 0;
}