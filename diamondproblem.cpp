#include<iostream>
using namespace std;
class grandparent
{
    int x;
    public:
    void getdata(int n)
    {
        x=n;
    }
    void showdata()
    {
        cout<<x;
    }
};
class parent1: public virtual grandparent
{
};
class parent2: public virtual grandparent
{
};
class child:public parent1,public parent2
{
    public:
    void display()
    {
        showdata();
    }
};
int main()
{
    child obj;
    obj.getdata(10);
    obj.display();
    return 0;
}
