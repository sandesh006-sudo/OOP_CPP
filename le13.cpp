#include<iostream>
using namespace std;
class vector
{
    float a,b,c;
    public:
    vector(float x=0,float y=0,float z=0)
    {
        a=x;
        b=y;
        c=z;
    }
friend vector operator*(float n,vector v);
    void display()
    {
        cout<<a<<"i+"<<b<<"j+"<<c<<"k";
    }
};
vector operator*(float n,vector v)
{
    vector temp;
    temp.a=n*v.a;
    temp.b=n*v.b;
    temp.c=n*v.c;
    return temp;
}
int main()
{
   vector v1(2,2.3,3.5);
   vector v3;
   v3=2.2*v1;
   v3.display();
    return 0;
}
