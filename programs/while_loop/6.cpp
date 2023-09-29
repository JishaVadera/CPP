#include <iostream>
using namespace std;

int main()
{
    int i = 65, j = 65;

    while (i <= 69)
    {
        j = 65;
        while (j <= 69)
        {
            cout << (char)i << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}