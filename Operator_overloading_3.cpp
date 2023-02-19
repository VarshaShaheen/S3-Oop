//Operator overloading as friend functions, adding two integers stored in object

#include <iostream>
using namespace std;

class A{
private:
    int a;
public:
    void init(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    void display(){
        cout<<"The value of sum is: "<<a<<endl;
    }
    friend A add(A ob1, A ob2);
};

A add(A ob1, A ob2){
    A temp;
    temp.a = ob1.a + ob2.a;
    return temp;
}

int main(){
    A ob1,ob2,ob3;
    ob1.init();
    ob2.init();
    ob3 = add(ob1,ob2);
    ob3.display();
    return 0;
}