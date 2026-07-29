#include <iostream>
#include <cmath>
using namespace std;
class mountain
{
 string name;
 string location;
 float height;
public:
    mountain(string n, float h, string l)
    {
        name = n;
        height = h;
        location = l;
    }
mountain cmpheight(mountain m)
{
    if (height>m.height)
    return *this;
    else
    return m;
}
void display()
{
    cout<<"Name="<<name<<endl;
    cout<<"Location="<<location<<endl;
    cout<<"Height="<<height<<endl;
}
};
int main() {
    mountain m1("everest",8848.86,"nepal");
    mountain m2("k2",8641,"pakistan");
    mountain m3=m1.cmpheight(m2);
    m3.display();
	return 0;

}
