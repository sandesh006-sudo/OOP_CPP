#include<iostream>
using namespace std;

class student
{
    int *m;

public:
    student()
    {
        m = new int[5];   // Dynamic memory allocation
    }

    void getdata()
    {
        cout << "Enter marks for 5 subjects: ";
        for(int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
    }

    void passorfail()
    {
        int flag = 0;

        for(int i = 0; i < 5; i++)
        {
            if(m[i] < 45)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
            cout << "Fail";
        else
            cout << "Pass";
    }

    ~student()
    {
        delete[] m;   // Free dynamically allocated memory
    }
};

int main()
{
    student s;

    s.getdata();
    s.passorfail();

    return 0;
}
