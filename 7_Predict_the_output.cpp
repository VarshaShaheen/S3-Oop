//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

void Sum(int a, int b, int & c)
{
    a= b + c;  //6
    b =a+ c;   //9
    c =a+ b;   //15 value of c will only change in main
}

int main()
{
    int x = 2, y =3;
    Sum(x, y, y);
    cout << x <<" " << y;
    return 0;
}

