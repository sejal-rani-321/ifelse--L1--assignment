// Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.


#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int length, breadth;
    cout << " Enter length & breadth: " << endl;
    cin >>length >>breadth;

   int area_of_the_rectangle = length * breadth;
   int perimeter = 2*(length + breadth);

   if(area_of_the_rectangle >= perimeter)
   cout << " area of the rectangle is greater " <<  area_of_the_rectangle << endl;
   else cout << perimeter << endl;
}