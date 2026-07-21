//tola to gram 1 tola=11.664gm
#include<iostream>
using namespace std;
class tola
{
    float t;
    public:
    tola()
    {
        t=0;
    }
    tola(float to)
    {
        t=to;
    }
    float gettola()
    {
        return t;
    }
   
};
class gram
{
    float gm;
    public:
    gram()
    {
        gm=0;
    }
    gram(float g)
    {
        gm=g;
    }
    gram(tola t)
    {
        gm= t.gettola()*11.664;
    }
    void display()
    {
        cout<<"weight in gram"<<gm;
}
};
int main()
{
    tola t(200);
    gram g;
    g=t;
    g.display();
    return 0;
}
