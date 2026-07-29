#include <iostream>
using namespace std;

class Compare
{
    int a, b;

public:

    void input()
    {
        cout << "Enter two integer values: ";
        cin >> a >> b;
    }

    void compare()
    {
        cout << "Equality (==): ";
        if(a == b)
            cout << "Both numbers are equal" << endl;
        else
            cout << "Numbers are not equal" << endl;

        cout << "Less than (<): ";
        if(a < b)
            cout << a << " is less than " << b << endl;
        else
            cout << a << " is not less than " << b << endl;

        cout << "Greater than (>): ";
        if(a > b)
            cout << a << " is greater than " << b << endl;
        else
            cout << a << " is not greater than " << b << endl;

        cout << "Not equal (!=): ";
        if(a != b)
            cout << "Numbers are not equal" << endl;
        else
            cout << "Numbers are equal" << endl;

        cout << "Greater than or equal (>=): ";
        if(a >= b)
            cout << a << " is greater than or equal to " << b << endl;
        else
            cout << a << " is not greater than or equal to " << b << endl;
    }
};

int main()
{
    Compare c;

    c.input();
    c.compare();

    return 0;
}
