//
// Created by Varsha on 18-02-2023.
//
//Program which to read the file word by word.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string s;
    fstream ob("test.txt", ios::in);
    ob >> s;
    while(!ob.eof()){
        cout << s << endl;
        ob >> s;
    }

}