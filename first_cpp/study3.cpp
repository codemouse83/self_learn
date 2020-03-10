//prob3-1
/*
#include <iostream>
#include "data.h"

using namespace std;

int main(){
  CData d;
  d.init();
  d.setNumber(100);
  d.setComment("Programming C++");
  cout << "number = " << d.getNumber() << " comment = " << d.getComment() << endl;
  return 0;
}
*/

//prob3-2
/*
#include <iostream>
#include "twostrings.h"

using namespace std;

int main(){
  TwoStrings s;
  s.setString1("Hello");
  s.setString2("World");
  cout << "一つ目の文字列は" << s.getString1() << endl;
  cout << "二つ目の文字列は" << s.getString2() << endl;
  cout << "二つの文字列を合成したものは" << s.getConnectedString() << endl;
  cout << "合成した文字列の長さは" <<s.getConnectedLength() << "文字" << endl;
  return 0;
}
*/

//prob3-3
#include <iostream>
#include "calculation.h"

using namespace std;

int main(){
  Calculation c;
  c.setNumber1(8);
  c.setNumber2(9);

  cout << c.getNumber1() << " + " << c.getNumber2() << " = " << c.add() << endl;
  cout << c.getNumber1() << " - " << c.getNumber2() << " = " << c.sub() << endl;
  return 0;
}
