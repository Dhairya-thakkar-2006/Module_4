#include<iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    void showPrivate() {
        cout << "\n\n\tPrivate Variable: " << privateVar ;
    }
};

class Derived : public Base {
public:
    void showProtected() {
        cout << "\n\n\tProtected Variable: " << protectedVar;
    }

    void showPublic() {
        cout << "\n\n\tPublic Variable: " << publicVar;
    }
};

int main() {
    Derived obj;
    obj.showPrivate();
    obj.showProtected();
    obj.showPublic();
    return 0;
}

