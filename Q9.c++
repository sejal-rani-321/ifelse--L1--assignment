// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include<iostream>
using namespace std;

int main(){

    int ch ;
    cout << " enter ch " << endl;
    cin >> ch ;
    
    if ((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a alphabet  " << endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout << ch << " is a digit  " << endl;
    }
    else{
        cout << ch << " is a special character  " << endl;

    }
    return 0;

}

