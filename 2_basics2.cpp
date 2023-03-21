//
// Created by Varsha on 21-03-2023.
//
//Given a set of numbers, find the sum of even and odd numbers in it.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int sumOdd = 0, sumEven = 0;
    char num;
    cout <<"Enter the numbers seperated by space and press enter when done: "<<endl;
    num = getchar();
    while(num != 10){
        if (num >= '0' && num <= '9'){
            num = num - '0';
            if (num % 2 == 0) {
                sumEven += num;
            }
            else {
                sumOdd += num;
            }
        }

        num = getchar();
    }
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    return 0;
}
