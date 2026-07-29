
#include<iostream>
using namespace std;
class complex
{
   float real,imag;
   public:
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    friend complex multiply(complex,complex);
};
complex multiply(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real*c2.real-c1.imag*c2.imag;
    temp.imag=c1.real*c2.imag+c1.imag*c2.real;
    return temp;
}
int main()
{
complex c1,c2,c3;
c1.input();
c2.input();
c3=multiply(c1,c2);
c3.display();
    return 0;
    
    
}
