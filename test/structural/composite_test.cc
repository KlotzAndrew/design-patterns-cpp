// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/composite.cc"

int main() {
  Element* element = new Element;
  int number = element->traverse();
  assert(number == 1);

  Composite* composite = new Composite;
  composite->add(new Element);
  composite->add(new Element);
  composite->add(new Element);
  number = composite->traverse();
  assert(number == 3);
}
