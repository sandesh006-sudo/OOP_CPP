#include <iostream>
using namespace std;
class student
{
    string name;
    string address;
    int age;
    long int citizenshipno;
    public:
    student(string n,string ad,int a,long int cn)
    {
        name=n;
        address=ad;
        age=a;
        if(age>16)
        citizenshipno=cn;
        else
        citizenshipno=0;
    }
    void getdata()
    {
        cout<<"enter name address age citizenshipno";
        cin>>name>>address>>age>>citizenshipno;
    }
    void showdata()
    {
       cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout<<"Citizenship number:"<<citizenshipno;
    }
};
int main() {
	student s1("ram","raniban",15,22312);
	student s2("hari","banasthali",20,12312);
	s1.showdata();
	s2.showdata();
	return 0;

}
