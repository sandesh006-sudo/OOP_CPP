//overloading with friend function
#include<iostream>
using namespace std;
class test2;
class test1
{
    int a;
    public:
    void getdata()
    {
        cout<<"enter a";
        cin>>a;
    }
    friend void operator >(test1,test2);
};
class test2
{
    int b;
    public:
    void getdata()
    {
        cout<<"enter b";
        cin>>b;
    }
    friend void operator >(test1,test2);
};
void operator >(test1 t1,test2 t2)
{
    t1.a>t2.b?cout<<"a is greater":cout<<"b is greater";
}
int main()
{
    test1 a;
    test2 b;
    a.getdata();
    b.getdata();
    a>b;
}
