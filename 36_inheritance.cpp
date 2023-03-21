//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {cout<<"Zero argument constructor in Base class A"<<endl;
    }
};
class B
{
public:
    B()
    {cout<<"Zero argument constructor in Base class B"<<endl;
    }
};

class C: public B,public A
{
public:
    C() : A(),B()
    {
        cout<<"Zero argument constructor in class C"<<endl;
    }
};

int main()
{
    C obj;
    return 0;
}