// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student
{
    protected:
    string name;
    int roll;
    public:
    student(string n,int r)
    {
        name=n;
        roll=r;
    }
        virtual void display()=0;
};
class engineering:public student
{
    public:
    engineering(string n,int r):student(n,r)
    {}
    void display()
    {
        cout<<"engineering student"<<endl;
        cout<<"name="<<name;
        cout<<"roll="<<roll;
    }
};
class medical:public student
{
    public:
    medical(string n,int r):student(n,r)
    {}
    void display()
    {
        cout<<"medical studnet"<<endl;
          cout<<"name="<<name;
        cout<<"roll="<<roll;
    }
};
class science:public student
{
    public:
    science(string n,int r):student(n,r)
    {}
    void display()
    {
        cout<<"science studnet"<<endl;
          cout<<"name="<<name;
        cout<<"roll="<<roll;
    }
};
int main() {
  science s("ram",10);
  engineering e("hari",20);
  medical m("gita",30);
  student *p[]={&s,&e,&m};
  for(int i=0;i<3;i++)
  p[i]->display();

    return 0;
}
