// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/visitor.cc"

int main() {
  ConcreteElementA *ea = new ConcreteElementA;
  ConcreteElementB *eb = new ConcreteElementB;

  ConcreteVisitorA *va = new ConcreteVisitorA;
  ConcreteVisitorB *vb = new ConcreteVisitorB;

  assert(ea->accept(va) == 100);
  assert(eb->accept(va) == 200);

  assert(ea->accept(vb) == 200);
  assert(eb->accept(vb) == 400);
}
