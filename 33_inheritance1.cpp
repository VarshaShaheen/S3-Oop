/*Write a program using inheritance such that the derived
class multiplies one public member and one private
member of the Base class.*/

#include <iostream>
using namespace std;

class A{
private:
    int a=10;
public:
    int b=20;
    void mult(int x){
        a*=x;
    }
    void display(){
        cout<<a<<endl<<b;
    }
};
class B:public A{
public:
    void multiply(){
        b*=2;
        mult(2);
    }
};

int main(){
    B obj;
    obj.multiply();
    obj.display();
}