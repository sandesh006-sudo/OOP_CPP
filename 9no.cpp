#include<iostream>
using namespace std;
class dimension
{
    protected:
    int length;
    int breadth;
    public:
     dimension(int l,int b)
    {
        length=l;
        breadth=b;
    }
    virtual void area()=0;//virtual function
};
class square:public dimension
{
    public:
    square(int l):dimension(l,l)
    {
    }
    void area()
    {
        cout<<"area of square is ="<<length*breadth;
    }
};
class rectangle:public dimension
{
    public:
    rectangle(int l,int b):dimension(l,b)
    {
    }
    void area()
    {
        cout<<"area of rectangle is"<<length*breadth;
    }
};
int main()
{
    square s1(10);
    rectangle r1(10,20);
    dimension *p[]={&s1,&r1};
    for(int i=0;i<2;i++)
    p[i]->area();
    return 0;
    
    
    
    
    
    
}
