#include<iostream>
using namespace std;
class person
{
    private:
    string name,city;
    int age;

    public:
    void setnamecity(string n,string c)
    {
        name=n;
        city=c;
    }
    void setage(int a)
    {
        age=a;
    }
    void getnamecity()
    {
        cout<<"name=  "<<name<<"\n";
        cout<<"city=  "<<city<<"\n";
    }
    void getage()
    {
        cout<<"age=  "<<age;
    }
};
int main()
{
    int a;
    string b,c;

    person pr;
    pr.setnamecity("Jisha","Surat");
    pr.setage(18);
    pr.getnamecity();
    pr.getage();
    return 0;
}