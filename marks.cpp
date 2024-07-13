#include<iostream>
using namespace std;
class student
{
    private:
        int eng,guj,html,sci,total,per;

    public:
        int e=eng, g =  guj , h=html , s = sci,t=total,p=per;
       
        void tt(int e,int g,int h,int s,int t)
        {
            t=e+g+h+s;
            cout << "total is="<<t<<endl;
        }
        void percen(int t,int p)
        {
            p=t/100*400;
            cout<<"per is="<<p<<endl;
        }
};
int main()
{
    int eng,guj,html,sci;
    cout<<"enter marks of eng=";
    cin>>eng;

    cout<<"enter marks of guj=";
    cin>>guj;
    
    cout<<"enter marks of html=";
    cin>>html;

    cout<<"enter marks of sci=";
    cin>>sci;
    student s1;
    s1.tt('e','g','h','s','t');
    s1.percen('t','p');
    return 0;
}