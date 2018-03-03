#include <cassert>

#include "../../src/structural/bridge.cpp"

int main()
{
  SmallTax* small = new SmallTax(double(100));
  assert(small->totalTax() == double(10));

  BigTax* big = new BigTax(double(100));
  assert(big->totalTax() == double(20));
}
