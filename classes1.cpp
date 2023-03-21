//
// Created by Varsha on 21-03-2023.
//
//Write a class to do all 4 arithmetic functions. Depending on the user's choice, one
//of the operation is performed.

#include <iostream>
using namespace std;

class calculator{
private:
    int a,b;
public:
    void getdata(){
        cout<<"Enter the numbers: ";
        cin>>a>>b;
    }
    int add(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int mul(){
        return a*b;
    }
    float div(){
        return (float)a/b;
    }
};

int main(){
    calculator ob;
    int choice;
    ob.getdata();
    cout<<"Enter the choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Sum: "<<ob.add();
            break;
        case 2:
            cout<<"Difference: "<<ob.sub();
            break;
        case 3:
            cout<<"Product: "<<ob.mul();
            break;
        case 4:
            cout<<"Quotient: "<<ob.div();
            break;
        default:
            cout<<"Invalid choice";
    }
}
