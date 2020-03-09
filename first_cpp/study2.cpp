//prob2-1
/*
#include <iostream>
#include "keisan.h"

using namespace std;

int main(){
  Keisan k;
  k.a = 4;
  k.b = 3;
  cout << k.a << " + " << k.b << " = " << k.add() << endl;
  cout << k.a << " - " << k.b << " = " << k.sub() << endl;
}
*/

//prob2-2
#include <iostream>
#include "minmax.h"

using namespace std;

int main(){
  MinMax m;
  int a = 4;
  int b = 2;
  int c = 2;
  cout << a << "と" << b << "と"<< c << "のうち、最大のものは" << m.max(a,b,c) << endl;
  cout << a << "と" << b << "と"<< c << "のうち、最小のものは" << m.min(a,b,c) << endl;
  return 0;
}
