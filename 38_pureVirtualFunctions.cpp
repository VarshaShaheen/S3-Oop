//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;
};
class Derived: public Base
{
public:
    void show() {
        cout << "In Derived \n";
    }
};
int main()
{
    Base *bp;
    Derived d;
    bp = &d;
    bp->show();
    return 0;
}