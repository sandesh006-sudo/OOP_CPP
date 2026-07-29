#include <iostream>
#include <cmath>
using namespace std;
class number
{
int a,b,c;
public:
    void input();
    void largest();
    void display();
};
void number::input()
{
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
}
void number::largest()
{
    if(a>b &&a>c)
    cout<<"largest is"<<a;
    else if(b>c)
    cout<<"largest is "<<b;
    else
    cout<<"largest is"<<c;
}
void number::display()
{
    cout<<"numbers are:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
}
int main() {
 number n1;
 n1.input();
 n1.largest();
 n1.display();

}
