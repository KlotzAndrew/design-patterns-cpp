// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/strategy.cc"

int main() {
  ConcreteStrategyA sa;
  ConcreteStrategyB sb;

  Context *context = new Context(&sa);
  int value = context->calculate();
  assert(value == 10);

  context = new Context(&sb);
  value = context->calculate();
  assert(value == 20);
}
