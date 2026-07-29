#include <iostream>
using namespace std;

class B;  

class A
{
    int a;

public:
    void get()
    {
        cout << "Enter value of A: ";
        cin >> a;
    }

    void max(B);
};

class B
{
    int b;

public:
    void get()
    {
        cout << "Enter value of B: ";
        cin >> b;
    }

    friend void A::max(B);
};

void A::max(B obj)
{
    if(a > obj.b)
        cout << "Maximum value = " << a;
    else
        cout << "Maximum value = " << obj.b;
}

int main()
{
    A obj1;
    B obj2;

    obj1.get();
    obj2.get();

    obj1.max(obj2);

    return 0;
}
