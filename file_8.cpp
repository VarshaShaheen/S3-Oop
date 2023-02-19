//
// Created by Varsha on 19-02-2023.
//
/*Qn.Write a program to search for a laptop from a binary data file,”Laptop.dat”
containing objects of laptop defined with model_no,RAM,HDD and other details.
The user should enter the model no, search and display the details of the particular
laptop.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Laptop {
    int model_no;
    int RAM;
    int HDD;
    string processor;
public:
    void get_data(){
        cout << "Enter model no, RAM, HDD and processor: ";
        cin >> model_no >> RAM >> HDD >> processor;
    }
    void display(){
        cout << "Model no: " << model_no << "\tRAM: " << RAM << "\tHDD: " << HDD << "\tProcessor: " << processor << endl;
    }
};

int main(){
    Laptop ob[100],temp;
    int n,i;
    cout<< "Enter the number of laptops: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        ob[i].get_data();
    }
    ofstream fob;
    fob.open("Laptop.dat",ios::out | ios::binary);
    for(i=0;i<n;i++){
        fob.write((char*)&ob[i],sizeof(ob[i]));
    }
    fob.close();

    int model_no;
    cout << "Enter the model no to be searched: ";
    cin >> model_no;
    ifstream fob2;
    fob2.open("Laptop.dat",ios::in | ios::binary);
    fob2.seekg(sizeof(ob[0])*(model_no-1), ios::beg);
    fob2.read((char *)&temp, sizeof(temp));
    temp.display();
    fob2.close();
}