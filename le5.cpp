#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public:

    void input()
    {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }

    Distance add(Distance f)
    {
        Distance temp;

        temp.feet = feet + f.feet;
        temp.inches = inches + f.inches;

        if(temp.inches >= 12)
        {
            temp.feet++;
            temp.inches = temp.inches - 12;
        }

        return temp;
    }

    Distance subtract(Distance f)
    {
        Distance temp;

        temp.feet = feet - f.feet;
        temp.inches = inches - f.inches;

        if(temp.inches < 0)
        {
            temp.feet--;
            temp.inches = temp.inches + 12;
        }

        return temp;
    }

    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1, d2, sum, diff;

    cout << "Enter first distance:" << endl;
    d1.input();

    cout << "Enter second distance:" << endl;
    d2.input();

    sum = d1.add(d2);
    diff = d1.subtract(d2);

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}
