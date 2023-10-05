#include<iostream>
using namespace std;
class person
{
    string name,city;
    int age;
    public:
    person()
    {
        cout<<"enter your name= ";
        cin>>name;
        cout<<"enter your age= ";
        cin>>age;
        cout<<"enter your city= ";
        cin>>city;

        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"City = "<<city;
    }
};
int main()
{
    person();
    return 0;
}