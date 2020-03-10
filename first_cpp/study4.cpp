//prob4-1
/*
#include <iostream>
#include "number.h"

using namespace std;

int main(){
  Number* pN  = 0;
  pN = new Number();
  pN -> setNumbers(1,2);
  cout << pN->getAdd() << endl;
  delete pN;
  return 0;
}
*/

//prob4-2
/*
#include <iostream>
#include "hoge.h"

using namespace  std;

int main(){
  Hoge* pH;
  pH = new Hoge();
  pH -> foo();
  delete pH;
  return 0;
}
*/

//prob4-3
#include <iostream>

using namespace std;

int main(){
  int* num = new int[4];
  int  i;
  for (i = 0; i < 4; i++){
    cout << "num[" << i<< "]" << i << " ";
  }
  cout << endl;
  delete [] num;
  return 0;
}
