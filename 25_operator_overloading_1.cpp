//
// Created by Varsha on 19-02-2023.
//
//1. A class contains a one dimensional array. Overload the operator (unary -)
//to multiply each element of the object by -1.

#include <iostream>
using namespace std;

class A{
private:
    int a[100];
    int n;
public:
    A(){
        cout << "Enter the size of the array:";
        cin >> n;
        cout << "Enter the elements of the array:";
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
    }
    void operator -(){
        for(int i = 0; i < n; i++){
            a[i] = -a[i];
        }
    }
    void display(){
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
};

int main(){
    A obj;
    -obj;
    obj.display();
    return 0;
}