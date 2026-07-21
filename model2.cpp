#include<iostream>
using namespace std;
//kilogram to pound (casting operation function)
class pound
{
    float weight;
    public:
    pound()
    {
        weight=0;
    }
    void setwt(float w)
    {
        weight=w;
    }
    void display()
    {
            cout<<"weight in pound="<<weight;
    }

};

class kilowt
{
    float kilo;
    public:
    kilowt()
    {
        kilo=0;
    }
    void getkilo()
    {
        cout<<"Enter weight in kg";
        cin>>kilo;
    }
    operator pound()
    {
        pound p;
        p.setwt(kilo*2.20);
        return p;
    }
};
int main()
{
    kilowt k;
    pound p;
    k.getkilo();
    p=k;
    p.display();
    return 0;
}
