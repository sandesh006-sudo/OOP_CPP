#include<iostream>
using namespace std;
class student//base class
{
    int id;
    char name[20];
public:
void getdata()
{
    cout<<"enter name and id";
    cin>>name>>id;
}
void putdata()
{
    cout<<"name="<<name;
    cout<<"id="<<id;
}
};
class physical:public student //single inheritance
{
    float height,weight;
    public:
    void getphysical()
    {
        cout<<"enter height and weight";
        cin>>height>>weight;
    }
    void putphysical()
    {
        cout<<"height="<<height;
        cout<<"weight="<<weight;
    }
};
int main()
{
    physical p; //derived class object
    p.getdata();
    p.getphysical();
    p.putdata();
    p.putphysical();
    return 0;
}
