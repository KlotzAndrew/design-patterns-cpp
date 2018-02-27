#include <cassert>

#include "../../src/structural/adapter.cpp"

int main()
{
  Adapter* adapter = new Adapter;

  int value = adapter->newMethod();

  assert(value == 4);
}
