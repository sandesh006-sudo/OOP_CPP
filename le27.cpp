#include <iostream>
using namespace std;

class grandparent
{
protected:
int x;
public:
void setdata(int n)
{
    x=n;
}
void display()
{
    cout<<"x="<<x;
}
};
class parent1:public virtual grandparent
{
    
};
class parent2:public virtual grandparent
{
    
};
class child:public parent1,public parent2
{
    public:
    void show()
    {
        display();
    }
};
int main()
{
    child x;
    x.setdata(10);
    x.show();
}
