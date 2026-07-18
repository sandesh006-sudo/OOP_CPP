#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void saveToFile() {
        ofstream file("student.txt", ios::app);
        file << roll << " " << name << " " << marks << endl;
        file.close();
        cout << "Record saved successfully.\n";
    }

    void displayFile() {
        ifstream file("student.txt");
        string line;

        cout << "\nStudent Records:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
};

int main() {
    Student s;

    s.input();
    s.saveToFile();
    s.displayFile();

    return 0;
}
