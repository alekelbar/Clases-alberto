#pragma once

template <class T>
class Tester
{
private:
  /* data */
public:
  bool expected(T value, T tobe)
  {
    return value == tobe;
  }
};