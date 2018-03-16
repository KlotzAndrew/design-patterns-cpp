// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/state.cc"

int main() {
  State *stateA = new ConcreteStateA;
  State *stateB = new ConcreteStateB;

  Context *context = new Context;

  context->setState(stateA);
  int value = context->request();
  assert(value == 10);

  context->setState(stateB);
  value = context->request();
  assert(value == 100);
}
