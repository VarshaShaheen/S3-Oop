//
// Created by Varsha on 18-02-2023.
//
//Qn. Read your roll no, name and age from keyboard write to a data file stud.dat. Read the
//file and display in a proper format.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    int roll, age;
    ofstream obj("stud.dat");
    cout << "Enter your roll no: ";
    cin >> roll;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    obj << roll << " " << name << " " << age << endl;
    obj.close();
    ifstream obj1("stud.dat");
    obj1 >> roll >> name >> age;
    cout << "Roll no: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    obj1.close();
    return 0;
}
