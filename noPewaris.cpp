#include <iostream>
using namespace std;

class baseClass final {
    public :
        virtual void perkenalan() {
            cout << "Hallo saya function dari base class";
        }
};

class baseClass1  {
    public :
        virtual void perkenalan() {
            cout << "Hallo saya function dari base class";
        }
};

class derivedClass : public baseClass1 {
    public :
    void perkenalan1() {
        cout << "Hallo saya function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}