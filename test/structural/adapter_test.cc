// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/adapter.cc"

int main() {
  Adapter* adapter = new Adapter;

  int value = adapter->newMethod();

  assert(value == 4);
}
