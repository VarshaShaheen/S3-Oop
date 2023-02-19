//
// Created by Varsha on 19-02-2023.
//
//Write a class named complex to represent a complex number. Overload ++
//operator in the prefix and postfix way so as to increment it.

#include <iostream>
using namespace std;

class complex{
private:
    int real;
    int imag;
public:
    void init(){
        cout<<"Enter the complex part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>imag;
    }
    void define(complex c){
        real = c.real;
        imag = c.imag;
    }
    complex operator ++(){
        complex temp;
        temp.real = ++real;
        temp.imag = imag;
        return temp;
    }
    complex operator ++(int){
        complex temp;
        temp.imag = imag;
        temp.real = real++;
        return temp;
    }
    void display(){
        cout<< "Real part: "<< real<< endl;
        cout<< "Imaginary part: "<< imag<< endl;
    }
};

int main(){
    complex c1,c2,c3,c4;
    c1.init();
    c2.define(c1);
    c3=c1++;
    c4=++c2;
    c3.display();
    c4.display();
    return 0;
}