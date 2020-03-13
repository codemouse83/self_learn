#ifndef _COUNTER1_H_
#define _COUNTER1_H_

class Counter{
private:
  int m_count;
public:
  Counter();
  void reset();
  int getCount();
  void count();
  void count(int count);
};

#endif // _COUNTER1_H_
