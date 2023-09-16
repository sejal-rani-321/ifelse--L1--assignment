#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << " enter num : " <<endl;
  cin >>num;

  if (num = 90){
    cout << " you got A grade " <<endl;
  }
  else if(num >= 80){
    cout << " you got B grade " <<endl;
  }
  else if(num >= 60){
    cout << " you got C grade " <<endl;
  }
  else{
    cout << " you Fail " <<endl;
  }
}

