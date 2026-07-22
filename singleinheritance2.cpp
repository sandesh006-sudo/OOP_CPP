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
class physical:private student //single inheritance
{
    float height,weight;
    public:
    void getphysical()
    {
        getdata(); //accesibily mode private xa so only member function of class can access private member functions
        cout<<"enter height and weight";
        cin>>height>>weight;
    }
    void putphysical()
    {
        putdata();
        cout<<"height="<<height;
        cout<<"weight="<<weight;
    }
};
int main()
{
    physical p; //derived class object
    //p.getdata();
    p.getphysical();
    //p.putdata();
    p.putphysical();
    return 0;
}
