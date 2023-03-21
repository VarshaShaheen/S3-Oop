//Qn. Given two strings. You have to concatenate two strings by overloading the binary
//operator+.

#include <iostream>
#include <cstring>
using namespace std;

class add_string{
private:
    char a[100];
    int len;
public:
    void init(){
        cin>>a;
    }
    add_string operator +(add_string b){
        add_string c;
        strcat(a,b.a);
        strcpy(c.a,a);
        return c;
    }

    void display(){
        cout<<a;
    };
};

int main(){
    add_string A, B, C;
    A.init();
    B.init();
    C = A + B;
    C.display();
}