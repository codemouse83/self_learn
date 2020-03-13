//prob7-1
/*
#include <iostream>
#include "counter1.h"

using namespace std;

int main(){
  Counter* pC = new Counter();
  pC->count();
  pC->count();
  cout << "回数" << pC->getCount() << "回" << endl;
  pC->count(4);
  cout << "回数" << pC->getCount() << "回" << endl;
  pC ->reset();
  cout << "回数" << pC->getCount() << "回" << endl;
  delete pC;
  return 0;
}
*/

//prob7-2
#include <iostream>
#include "vector.h"

using namespace std;

int main(){
  Vector *v1,*v2;
  v1 = new Vector();
  v2 = new Vector(1.1,2.3);
  v1->set(3.8,2.7);
  cout << "v1 = (" << v1->getX() << "," << v1->getY() << ")" << endl;
  cout << "v2 = (" << v2->getX() << "," << v2->getY() << ")" << endl;
  delete v1;
  delete v2;
  return 0;
}
