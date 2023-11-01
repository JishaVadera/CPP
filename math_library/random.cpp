#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int max = 120;
    int min = 50;
    int rn = min - rand() % (max + min + 1);
    cout << "Random Number: "<<rn<<endl;
}