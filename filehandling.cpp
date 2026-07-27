#include<iostream>
#include<fstream>
using namespace std;
class student{
    int rollno;
    char name[20];
    char dept[15];
    float marks;
    char grade;
public:
    void getdata(){
        cout<<"Rollno:";
        cin>>rollno;
        cout<<"Name:";
        cin>>name;
        cout<<"Department:";
        cin>>dept;
        cout<<"Marks:";
        cin>>marks;
        if(marks>=75){
            grade='A';
        }
        else if(marks>=60){
            grade='B';
        }
        else if(marks>=50){
            grade='C';
        }
        else if(marks>=40){
            grade='D';
        }
    
else {
    grade='F';
}
}
void putdata(){
    cout<<name<<", rollno "<<rollno
    <<", of Department of "<<dept<<" has ";
    cout<<marks<<"% marks and "<<grade
    <<" grade."<<endl;
}
int getrno() {
    return rollno;
}
};
int main(){
    ofstream fout("marks.txt",ios::out);
    char ans='y';
    student stud1;
    while(ans=='y'||ans=='Y') {
        stud1.getdata();
        fout.write((char*)&stud1,sizeof(stud1)
    );
    cout<<"Record added to the file\n";
    cout<<"\nWant to enter more?(y/n)..";
    cin>>ans;
    }
    fout.close();
    int rno;
    char found;
    ifstream fin("marks.txt",ios::in);
    found='n';
cout<<"Enter rollno to be searched for:";
cin>>rno;
while(!fin.eof())
{ 
    fin.read((char*)&stud1,sizeof(stud1));
    if(stud1.getrno()==rno)
    {
        cout<<"Record found at roll number "
        <<rno<<". Here is the record\n";
        stud1.putdata();
        found='t';
        break;
    }
}
if(found=='n')
{
    cout<<"\nRecord not found at this roll number..!!\n";
       
    exit(2);
}
fin.close();
cout<<"\nPress any key to exit...\n";
return 0;
}

