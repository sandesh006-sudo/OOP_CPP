#include<iostream>
using namespace std;
class display
{
    public:
    void show(char ch='*',int n=5)
    {
        for(int i=0;i<n;i++)
        {
            cout<<ch<<" ";
        }
    }
    void show(int n)
    {
        for(int i=0;i<=n;i++)
        {
            cout<<'$'<<" ";
        }
    }
};
int main()
{
    display d;
    cout<<"using deafult argument";
    d.show();
    d.show('@',5);
    d.show(3);
    return 0;
    
    
}
