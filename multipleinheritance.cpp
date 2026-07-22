//multiple inheritance ambiguity solve
#include<iostream>
using namespace std;
class base1
{
    protected:
    int x;
    public:
    void getx()
    {
        cout<<"enter x of base 1";
        cin>>x;
    }
};
class base2
{
    protected:
    int x;
    public:
    void getx()
    {
        cout<<"enter x of base 2";
        cin>>x;
    }
};
class derived:public base1,public base2
{
    protected:
    int z;
    public:
    void getz()
    {
        cout<<"enter z ";
        cin>>z;
    }
    void display()
    {
        cout<<"the sum is="<<base1::x+base2::x+z;
    }
};
int main()
{
    derived d;
    //d.getx(); error because compiler confuse and caused ambiguity
    d.base1::getx();
    d.base2::getx();
    d.getz();
    d.display();
    return 0;
}






