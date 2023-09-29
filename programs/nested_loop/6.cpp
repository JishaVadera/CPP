#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
            for (j = 1; j <= 5; j++)
            {
                cout << i << " ";
            }
        cout << endl;
    }
    return 0;
}