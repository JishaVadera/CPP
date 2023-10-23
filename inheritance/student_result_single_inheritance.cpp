#include<iostream>
using namespace std;
class student
{
    public:
    int eng,html,guj,total,per;
    void marks()
    {
    cout<<"Enter marks of eng: ";
    cin>>eng;

    cout<<"Enter marks of html: ";
    cin>>html;

    cout<<"Enter marks of guj: ";
    cin>>guj;
    }
};

class result  : public student
{
    public:
    void percen()
    {
    total = eng + html + guj;
    cout << "Total makrs: "<<total<<endl;

    per = total * 100 / 300;
    cout<< "Percentage: "<<per<<endl;
    }
};

int main()
{
    result res;
    res.marks();
    res.percen();
}