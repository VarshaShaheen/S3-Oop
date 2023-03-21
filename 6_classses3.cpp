//
// Created by Varsha on 21-03-2023.
//
//Write a class for storing the Temperature in celsius, include a member function to convert to fahrenheit and display it.

#include <iostream>
using namespace std;

class temperature{
    float cel, far;
public:
    void getdata(){
        cout<<"Enter temperature in Celsius: ";
        cin>>cel;
    }
    void convert(){
        far = (((9.0/5.0)*cel) + 32);
        cout<<"\nTemperature in Fahrenheit: "<<far;
    }
};

int main(){
    temperature temp;
    temp.getdata();
    temp.convert();
    return 0;
}