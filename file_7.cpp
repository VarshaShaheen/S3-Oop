//
// Created by Varsha on 19-02-2023.
//
//Qn. Display the contents of a file in reverse order.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream ob("test.txt");
    int i=1,size,j;
    string s[100];
    ob >> s[0];
    while(!ob.eof()){
        ob >> s[i];
        i++;
    }
    for (j = i-1; j >= 0; j--) {
        cout << s[j] << endl;
    }
}