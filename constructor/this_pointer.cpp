#include<iostream>
using namespace std;
class cookie
{
    public:
    int sugar;

    cookie(int sugar)
    {
        this->sugar = sugar;
    }

    void display()
    {
        cout<< "The sugar is: "<<sugar<<endl;
    }
};

int main()
{
    cookie choco(120);
    cookie chocochips(20);

    choco.display();
    chocochips.display();
}