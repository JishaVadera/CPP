#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;

    ifstream filestream("file.txt");
    
    if (filestream.is_open())
    {
        while (getline(filestream,str))
        {
            cout<<str<<endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"You were not able to open the file";
    }

    return 0;
    
}