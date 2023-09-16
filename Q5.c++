// Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include<iostream>
using namespace std;

int main(){

    char a, b,c;
    cout << " Enter three sides: " << endl;
    cin >> a >> b >> c;

    if(a == b ==c){
        cout << " equilateral " <<endl; 
    }
    else if(a == b || b == c || c == a){
    cout << " isosceles " <<endl;
   }
   else   
    cout << " scalene" << endl;
}