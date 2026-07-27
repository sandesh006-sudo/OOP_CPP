#include<iostream>
#include<fstream>

using namespace std;
class student{
char name[20];
float marks[5];
float avg;
static int sn;
public:
void input();
void display();
void writeToFile(student);
void readFromFile(student);
};
void student::input(){
cout<<"Enter your name:";
cin>>name;
cout<<"Enterthe obtained marks in 5 subjects\n";
for(int i = 0; i < 5; i++)
{
    cout<<"SUBJECT["<<i+1<<"] = ";
    cin>>marks[i];
}
sn++;
}
void student::display(){
    float sum=0;
    cout<<"\n*******************************************\n";
    cout<<"S_NO.\tNAME\tMARKS\tAVERAGE";
    cout<<"\n-----------------------------------\n";
    cout<<endl<<sn;
    cout<<"\t"<<name<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<"\t\t "<<marks[i]<<"\n";
        sum = sum + marks[i];
    }
    cout<<"\n-----------------------------------\n";
    avg = sum/5;
    cout<<"\t\t\t "<<avg;
    cout<<"\n-----------------------------------\n\n";
}
int student::sn; 
void student::readFromFile(student s) 
{
    fstream readFile;
    readFile.open("studentRecord.txt",ios::in|ios::out|ios::app);
    readFile.seekg(0,ios::end); 
    int a = readFile.tellp();
    readFile.seekg(0);
    if(a!=0)
    {
        while(readFile.read((char*)&s,sizeof s))
        {
            s.display(); 
            
        }
    }
    else
    {
        cout<<"~~~~~File is empty~~~~~\n"; 
        
    }
}
void student::writeToFile(student s)
{
    fstream writeFile;
    writeFile.open("studentRecord.txt",ios::out|ios::app);
    writeFile.write((char*)&s,sizeof s);
    writeFile.close();
}

int main(){
    student s;
    char ch;
    do{
        cout<<"\nEnter your choice:\n";
        cout<<"a. input\n";
        cout<<"b. view\n";
        cout<<"c. exit\n\n";
        cin>>ch;
        switch(ch)
        {
            case 'a':
            {
                s.input();
                s.writeToFile(s);
                break;
            }
            case 'b':
            {
                s.readFromFile(s);
                break;
            }
            case 'c':  
            exit(0);
        }
    }while(1);
    return 0;
}


