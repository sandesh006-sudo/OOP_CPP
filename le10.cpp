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
    void operator --()
    {
        --num;
    }
    void operator --(int )
    {
        num--;
    }
    void display()
    {
        cout<<"number="<<num;
    }
};
int main()
{
    number n(10);
    cout<<"after pre decrement";
    --n;
    n.display();
    cout<<"after post decrement";
    n--;
    n.display();
    return 0;
}
