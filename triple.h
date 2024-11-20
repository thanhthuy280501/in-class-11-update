#ifndef TRIPLE_H
#define TRIPLE_H

template <typename T>
class Triple {
  public:
    Triple();
    Triple(T first, T second, T third);

    void setFirst(T newValue);
    void setSecond(T newValue);
    void setThird(T newValue);

    T getFirst() const;
    T getSecond() const;
    T getThird() const;

  private:
    T *array; // Dynamically allocated array for storage
};

#include "triple.cpp" // Include implementation for templated class
#endif
