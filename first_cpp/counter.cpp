#include "counter.h"

int Counter::m_totalcount =  0;

Counter::Counter():m_count(0)
{
}

void Counter::reset(){
  m_totalcount-=m_count;
  m_count = 0;
}

void Counter::count(){
  m_count++;
  m_totalcount++;
}

int Counter::getCount(){
  return m_count;
}

int Counter::getTotalCount(){
  return m_totalcount;
}
