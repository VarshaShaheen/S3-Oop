//Create a text file of characters. Read each character, change the case and write
//the character back to a new file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    char ch,c;
    ofstream ob("test.txt");
    ch = getchar();
    while(ch != '\n'){
        ob<<ch;
        ch = getchar();
    }
    ob.close();
    ifstream ob1("test.txt");
    ofstream ob2("test2.txt");
    ob1>>c;
    while(!ob1.eof()){
        if(c >= 'a' && c <= 'z'){
            c = c - 32;

        }
        else if(c >= 'A' && c <= 'Z'){
            c = c + 32;
        }
        ob2<<c;
        ob1>>c;
    }
}