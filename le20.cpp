#include<iostream>
using namespace std;
class degree
{
float temp;
public:
degree(float t=0)
{
    temp=t;
}
void input()
{
    cout<<"enter temprature in degree celsisus";
    cin>>temp;
}
float getdegree()
{
    return temp;
}
void display()
{
    cout<<"degree celsius "<<temp;
}
};
class faren
{
    float temp;
    public:
    faren(float t=0)
    {
        temp=t;
    }
    faren(degree d)
    {
        temp=(d.getdegree()*9/5)+32;
    }
    void display()
    {
        cout<<"temperature in farenheit="<<temp;
    }
    operator degree()
    {
        float t;
        t=(temp-32)*5/9;
        return(degree(t));
    }
};
int main()
{
  degree d1;
  faren f1;
  d1.input();
  f1=d1;
  f1.display();
  d1=f1;
  d1.display();
    return 0;
}
