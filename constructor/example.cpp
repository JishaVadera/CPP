#include<iostream>
using namespace std;
class Pet
{
    public:
    virtual void print()
    {
        cout << "Sound of pet";
    }
};

class Dog : public Pet
{
    public:
    void print() override
    {
        cout<<"Dog barkes";
    }
};

class Cat : public Pet
{
    public:
    void print() override
    {
        cout<<"Cat meow";
    }
};

class goat : public Pet
{
    public:
    void print() override
    {
        cout << "Goat beeeee------";
    }
};
0
int main()
{
    Pet* p;
    Dog d;
    Cat c;
    goat g;

    p = &d;
    p->print();

    p = &c;
    p->print();

    p = &g;
    p->print();
}
