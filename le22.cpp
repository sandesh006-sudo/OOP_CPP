#include<iostream>
using namespace std;
class feet
{
    float ft,inch;
    public:
    feet()
    {
        ft=0;
    }
    feet(float m)
    {
        float total=m*3.280833;
        ft=int(total);
        inch=(total-ft)*12;
    }
    void display()
    {
        cout<<ft<<"feet"<<inch<<"inches";
    }
};
int main()
{
    feet f;
    int m=5;
    f=m;
    f.display();
}
