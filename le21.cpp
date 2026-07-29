#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:

    Time(int h=0, int m=0, int s=0)
    {
        hr=h;
        min=m;
        sec=s;
    }

    void input()
    {
        cout<<"Enter hour: ";
        cin>>hr;

        cout<<"Enter minute: ";
        cin>>min;

        cout<<"Enter second: ";
        cin>>sec;
    }
    operator int()
    {
        int total;
        total=hr*3600+min*60+sec;
        return total;
    }
        void display()
    {
        cout<<"Time = "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main()
{
    Time t;
    int total;
    t.input();
    total=t;
    cout<<"Total second is :"<<total;
}
