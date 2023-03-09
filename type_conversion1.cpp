/*We have class employee and one object of employee 'emp' and suppose we want
to assign the employee code of employee 'emp' by any integer variable say 'Ecode' then the
statement below is the example of the conversion from basic to class type. */

#include <iostream>
using namespace std;

class employee{
    int code;
public:
    employee(int a){
        code = a;
    }
    void show(){
        cout << "Employee code is: " << code << endl;
    }
};

int main(){
    int x;
    cin >> x;
    employee emp = x; // conversion from basic to class type
    emp.show();
    return 0;
}