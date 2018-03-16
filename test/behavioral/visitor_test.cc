// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/visitor.cc"

int main() {
  ConcreteElementA *ea = new ConcreteElementA;
  ConcreteElementB *eb = new ConcreteElementB;

  ConcreteVisitorA *va = new ConcreteVisitorA;
  ConcreteVisitorB *vb = new ConcreteVisitorB;

  int value;

  value = ea->accept(va);
  assert(value == 100);
  value = ea->accept(vb);
  assert(value == 200);

  value = eb->accept(va);
  assert(value == 300);
  value = eb->accept(vb);
  assert(value == 500);

  value = ea->accept(va);
  assert(value == 100);
  value = ea->accept(vb);
  assert(value == 200);

  value = eb->accept(va);
  assert(value == 300);
  value = eb->accept(vb);
  assert(value == 500);
}
