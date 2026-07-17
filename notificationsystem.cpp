#include <iostream>
#include <string>
using namespace std;

class notification {
protected:
    string message;

public:
    notification(string msg) {
        message = msg;
    }

    virtual void send() = 0;

    virtual ~notification() {}
};

class emailnotification : public notification {
public:
    emailnotification(string msg) : notification(msg) {}

    void send() override {
        cout << "Email sent: " << message << endl;
    }
};

class smsnotification : public notification {
public:
    smsnotification(string msg) : notification(msg) {}

    void send() override {
        cout << "SMS sent: " << message << endl;
    }
};

class pushnotification : public notification {
public:
    pushnotification(string msg) : notification(msg) {}

    void send() override {
        cout << "Push notification sent: " << message << endl;
    }
};

int main() {
    notification* n;

    n = new emailnotification("Welcome!");
    n->send();
    delete n;

    n = new smsnotification("Your OTP is 1234");
    n->send();
    delete n;

    n = new pushnotification("You have a new message");
    n->send();
    delete n;

    return 0;
}
