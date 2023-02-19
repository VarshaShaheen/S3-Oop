//
// Created by Varsha on 19-02-2023.
//
/*Create a text file of characters. Read each character, change the case and write
the character back to a new file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    char ch;
    fstream ob("test.txt", ios::in);
    fstream ob2("test2.txt", ios::out);
    ob >> ch;
    while(!ob.eof()){
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - 32;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
        }
        ob2 << ch;
        ob >> ch;
    }
}