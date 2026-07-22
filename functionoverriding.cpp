#include<iostream>
using namespace std;
class animal
{
    public:
    void sound()
    {
        cout<<"animal makes sound";
    }
};
class dog:public animal
{
    public:
    void sound()
    {
        animal::sound();//solve function overriding by member function of derived class
        cout<<"dog makes sound";
    }
};
int main()
{
    dog d;
    d.sound();//calls derived class sound
    d.animal::sound();//object of derived class solve function overriding
    return 0;
}
