//overloading == operator (binary operator) using operator overloading
#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    void operator ==(test t2)
    {
        if(a==t2.a)
        cout<<"Objects are equal";
        else
        cout<<"Objects arent equal";
    }
};
int main()
{
    test t1,t2;
    cout<<"enter first object";
    t1.get();
        cout<<"enter second object";
    t2.get();
    t1==t2;
    return 0;
}
