// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/composite.cc"

int main() {
  Element* element = new Element;
  assert(element->traverse() == 1);

  Composite* composite = new Composite;
  composite->add(new Element);
  composite->add(new Element);
  composite->add(new Element);
  assert(composite->traverse() == 3);
}
