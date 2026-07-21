#include<iostream>
using namespace std;
class dollar
{
    int dol;
    int cent;
    public:
    dollar(int d,int c)
    {
        dol=d;
        cent=c;
    }
    int getdollar()
    {
        return dol;
    }
    int getcent()
    {
        return cent;
    }
};
class rupees
{
    int rs;
    int paisa;
    public:
    rupees(int r=0,int p=0)
    {
        rs=r;
        paisa=p;
    }
    rupees(dollar d)
    {
        int totalcent,totalpaisa;
        totalcent=d.getdollar()*100+d.getcent();
        totalpaisa=totalcent*132;
        rs=totalpaisa/100;
        paisa=totalpaisa%100;
    }
    void display()
    {
         cout<<"the amount is "<<rs<<"rs"<<paisa<<"paisa";
    }
 
};
int main()
{
    dollar d(2,20);
    rupees r;
    r=d;
    r.display();
    return 0;
}
