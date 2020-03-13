//prob5-1
/*
#include <iostream>
#include "function.h"

using namespace std;

int main(){
  int m = 3, n = 1;
  cout << m << "と" << n << "のうち、最大のものは" << Function::max(m,n) << endl;
  cout << m << "と" << n << "のうち、最小のものは" << Function::min(m,n) << endl;
  return 0;
}
*/

//prob5-2
/*
#include <iostream>
#include "object.h"

using namespace std;

int main(){
  Object *o1, *o2, *o3;
  o1 = new Object();
  o2 = new Object();
  o3 = new Object();
  cout << "オブジェクトの数:" << Object::getObjectNum() << endl;
  delete o3;
  cout << "オブジェクトの数" << Object::getObjectNum() << endl;
  delete o2;
  delete o1;
  return 0;
}
*/

//prob5-3
#include <iostream>
#include "counter.h"

using namespace std;

int main(){
  Counter c1,c2;
  c1.count();
  c2.count();
  c2.count();
  c2.reset();
  c1.count();
  c1.count();
  c2.count();
  cout <<"c1のカウント数:" << c1.getCount() << endl;
  cout <<"c2のカウント数:" << c2.getCount() << endl;
  cout << "トータルのカウント数:" << Counter::getTotalCount() << endl;
  return 0;
}
