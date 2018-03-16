// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/bridge.cc"

int main() {
  SmallTax* small = new SmallTax(static_cast<double>(100));
  double totalTax = small->totalTax();
  assert(totalTax == static_cast<double>(10));

  BigTax* big = new BigTax(static_cast<double>(100));
  totalTax = big->totalTax();
  assert(totalTax == static_cast<double>(20));
}
