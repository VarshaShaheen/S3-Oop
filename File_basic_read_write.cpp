/*Qn. Read your roll no, name and age from keyboard write to a data file stud.dat.
 * Read the file and display in a proper format.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int roll_no, age, roll_no2, age2;
    string name, name2;
    cout << "Enter your roll no, name and age: ";
    cin >> roll_no >> name >> age;
    fstream fob;
    fob.open("stud.dat",ios::in | ios::out);
    fob << roll_no <<"\n"<< name <<"\n"<< age <<"\n";
    fob.seekg(0);
    fob >> roll_no2 >> name2 >> age2;
    cout << "Roll no: " << roll_no2 << "\tName: " << name2 << "\tAge: " << age2 << endl;
}

