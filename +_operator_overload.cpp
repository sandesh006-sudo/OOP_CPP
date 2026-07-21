//add two strings using + operator
#include<iostream>
#include<string.h>
using namespace std;
class test
{
char a[100];
    public:
    void getdata()
    {
        cout<<"enter string";
        cin>>a;
    }
    void showdata()
    {
        cout<<"concatinated string is"<<a;
    }
    /* 
    using only function
    test add(test t1)
    {
        test t3;
        strcpy(t3.st,t1);
        strcat(t3.st," ");//onespace after first string
        strcat(t3.st,t2.st);
        return t3;
    }
    */
    test operator +(test t1)
    {
        test t3;
        strcpy(t3.a,a);
        strcat(t3.a," ");
        strcat(t3.a,t1.a);
        return t3;
    }
};
int main()
{
    test s1,s2,s3;
    s1.getdata();
    s2.getdata();
    // t3=t1.add(t2); (using normal function)
    s3=s1+s2;
   s3.showdata();
    return 0;
}



