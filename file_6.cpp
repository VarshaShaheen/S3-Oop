/*Create a text file of digits and characters. Read it and count the number of digits
present in the file.*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char ch;
    int chr=0, dig=0;
    ofstream ob("CharandDigits.txt");
    ob << "52732e6gdhvdhgf7283ege73hed3";
    ob.close();

    ifstream ob2 ("CharandDigits.txt");
    ob2 >> ch;
    while(!ob2.eof()){
        if(ch >= '0'&& ch <= '9'){
            dig ++;
        }
        else{
            chr ++;
        }
        ob2 >> ch;
    }
    ob2.close();
    cout << "Digits: " << dig << endl;
    cout << "Characters: " << chr << endl;
}