#include <iostream>
#include <math.h>
using namespace std;
int main()
{

  int a,b,c;

  bool r1;

  a = 5;

  b = 3;

  c = b - a / b - a;

  b = a - c;

  r1 = b % 4 == b + c - a;

  cout << a << b << c << r1;

  return 0;

}



