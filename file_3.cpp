//
// Created by Varsha on 19-02-2023.
//
/*Write a program which creates two files, one containing the names of 3 Months and the other
containing the maximum number of days in each one. Later open both the files , read them and display
the contents as follows.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string month;
    int days;
    ofstream ob1,ob2;
    ob1.open("month.dat");
    ob2.open("days.dat");
    ob1 << "January" << endl << "February" << endl << "March" << endl;
    ob2 << "31" << endl << "28" << endl << "31" << endl;
    ob1.close();
    ob2.close();
    ifstream ib1,ib2;
    ib1.open("month.dat");
    ib2.open("days.dat");
    for(int i=0;i<3;i++){
        ib1 >> month;
        ib2 >> days;
        cout << month << " has " << days << " days." << endl;
    }
}