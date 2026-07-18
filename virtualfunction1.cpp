#include <iostream>
using namespace std;

class account {
protected:
    float balance;

public:
    account(float b) {
        balance = b;
    }

    virtual void interest() {
        cout << "Interest = " << balance * 0.02 << endl;
    }
};

class saving : public account {
public:
    saving(float b) : account(b) {}

    void interest() {
        cout << "Saving Interest = " << balance * 0.05 << endl;
    }
};

class current : public account {
public:
    current(float b) : account(b) {}

    void interest() {
        cout << "Current Interest = " << balance * 0.03 << endl;
    }
};

int main() {
    account *p;

    saving s(10000);
    current c(10000);

    p = &s;
    p->interest();

    p = &c;
    p->interest();

    return 0;
}
