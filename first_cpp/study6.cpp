//prob6-1
/*
#include <iostream>
#include "fighter.h"

using namespace std;

int main(){
  Fighter f;
  Airplane a;

  a.fly();
  f.fly();
  f.fight();
  return 0;
}
*/

//prob6-2
#include <iostream>
#include "newcalc.h"

using namespace std;

int main(){
  NewCalc n;
  n.setNumber1(10);
  n.setNumber2(2);
  cout << n.getNumber1() << " + " << n.getNumber2() << " = " << n.add() << endl;
  cout << n.getNumber1() << " - " << n.getNumber2() << " = " << n.sub() << endl;
  cout << n.getNumber1() << " * " << n.getNumber2() << " = " << n.mul() << endl;
  cout << n.getNumber1() << " / " << n.getNumber2() << " = " << n.div() << endl;

  return 0;
}
