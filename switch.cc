// switch example
#include <iostream>
using namespace std;

int main ()
{

int x=1;

  switch (x) {
    case 1: x=1;
    case 2: x=2;
    case 3: x=3;
      cout << "x is 1, 2 or 3" << endl;
      break;
    default:
      cout << "x is not 1, 2 nor 3" << endl;
    }
}
