#include <iostream>
#include <cmath>
using namespace std;
class triangle
{
 float a,b,c,area;
    public:
triangle()
{
    a=0;
    b=0;
    c=0;
}
   triangle(float x,float y,float z)
   {
       a=x;
       b=y;
       c=z;
   }
   void calculate()
   {
       float s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
   }
   void display()
   {
       cout<<"area of triangle is"<<area;
   }
};
int main() {
    triangle t1;
    triangle t2(3,4,5);
    t1.calculate();
    t2.calculate();
    t1.display();
    t2.display();
	return 0;

}
