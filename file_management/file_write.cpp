#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str = "JISHA";
    ofstream file("File1.txt",ios::app);//ios::app is used for append or it will save old data and new data too
    if (file.is_open())
    {
        file<<str<<endl;
        file<<"Hello"<<endl;
        file.close();
    }
    return 0;
    
}
