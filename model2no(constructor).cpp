#include<iostream>
using namespace std; 
//kilowt paila lekera no forward declaration
//kiloweight(source) to pound(destination)
class Kilowt
{
    float weight;
    public:
    Kilowt()
    {
        weight=0;
    }
    float getkilowt()
    {
        return weight;
    }
    void input()
    {
        cout<<"enter weight in kilogram";
        cin>>weight;
    }
};
class Poundwt
{
    float weight;
    public:
    Poundwt()
    {
        weight=0;
    }
    Poundwt(Kilowt k)
    {
        weight=k.getkilowt()*2.20;
    }
    void display()
    {
        cout<<"weight (in pound)="<<weight;
    }
};
int main()
{
    Kilowt k;
    Poundwt p;
    k.input();
    p=k;
    p.display();
    return 0;
}
