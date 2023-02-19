//
// Created by Varsha on 19-02-2023.
//
/*Qn. Write a program to find the area of a triangle. It uses exception handling to
guard against inconsistent data.*/

#include <iostream>
#include <cmath>
using namespace std;

void area(){
    int a,b,c;
    float s;
    cout << "Enter the sides of the triangle: ";
    cin>>a>>b>>c;
    try{
        if(a+b <= c || a+c <= b || b+c <= a){
            throw 1;
        }
        else{
            s= (a+b+c)/2;
            cout << "Area of the triangle is: " << sqrt(s*(s-a)*(s-b)*(s-c));
        }
    }
    catch(int x){
        cout << "Invalid triangle";
    }
}

int main(){
    area();
}