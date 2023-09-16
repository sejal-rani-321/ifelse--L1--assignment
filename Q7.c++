#include<iostream>
using namespace std;

int main(){

    int x, y;
    cin >>x >>y;

    if(x == 0 || y ==0){
        cout << " origin " <<endl;
    }

    else if(x == 0){
        cout << " loes on x - axis " <<endl;
    }

    else if( y ==0){
        cout << "loes on y - axis " <<endl;
    }
    else
        cout << " neigther x -axis nor y - axis" << endl; 
    
}