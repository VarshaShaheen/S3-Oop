//
// Created by Varsha on 21-03-2023.
//
//Write a program to reverse the digits of a number.

#include <iostream>
using namespace std;

int main(){
    int num , rev = 0, x;
    cout<<"Enter the number"<<endl;
    cin>>num;
    while(num){
        x = num % 10;
        rev = rev*10 + x;
        num /= 10;
    }
    cout<<"Reversed number: "<<rev;
}
