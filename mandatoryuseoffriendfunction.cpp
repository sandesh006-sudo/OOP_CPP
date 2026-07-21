#include<iostream>
using namespace std;
class complexx
{
    float real;
    float imag;
    public:
    void input()
    {
        cout<<"enter real part";
        cin>>real;
        cout<<"enter imaginary part";
        cin>>imag;
    }
    void display()
    {
        cout<<"("<<real<<","<<imag<<")";
    }
    complexx operator +(int p)
    {
        complexx temp;
        temp.real=real+p;
        temp.imag=imag+p;
        return temp;
    }
    friend complexx operator +(int p,complexx c);
};
complexx operator +(int p,complexx c)
{
    complexx temp;
    temp.real=p+c.real;
    temp.imag=p+c.imag;
    return temp;
}
int main()
{
    complexx c1,c2;
    c1.input();
    c2=c1+5; //c2=c1.operator+(5)
    cout<<"addition using member operator function"<<endl;
    c2.display();
    cout<<"addition using friend function"<<endl;
    c2=5+c1;
    c2.display();
    return 0;
}
