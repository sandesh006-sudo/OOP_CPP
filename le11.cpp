#include<iostream>
using namespace std;
class number
{
    int num;
    public:
    number(int n=0)
    {
        num=n;
    }
   number operator+(number n)
   {
       number temp;
       temp.num=num+n.num;
       return temp;
   }
    void display()
    {
        cout<<"number="<<num;
    }
};
int main()
{
    number n1(10);
    number n2(20);
 number n3=n1+n2;
    n3.display();
    return 0;
}
