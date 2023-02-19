//
// Created by Varsha on 19-02-2023.
//
/*Write a program using file which will count the occurrences of the word ‘the’
among the contents of the file. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream ob("test.txt");
    int count=0;
    string s;
    ob>>s;
    while(!ob.eof()){
        if(s == "the"){
            count++;
        }
        ob>>s;
    }
    cout<<count;
}