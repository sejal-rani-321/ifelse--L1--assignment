// Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.


#include <iostream>
using namespace std;
int main()
{
  int r ;
  cout << " enter r: " <<endl;
  cin >>r;

  int area = 3.14 * r * r;
  int circumference = 2 * 3.14 * r;

  if(area >= circumference){
    cout << "area is greater: " << area <<endl;
  }
  else{
    cout << "circumference is greater: " << area <<endl;

  }

}

