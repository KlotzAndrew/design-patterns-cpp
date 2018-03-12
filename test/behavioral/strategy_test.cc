// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/strategy.cc"

int main() {
  ConcreteStrategyA sa;
  ConcreteStrategyB sb;

  Context *context = new Context(&sa);
  assert(context->calculate() == 10);

  context = new Context(&sb);
  assert(context->calculate() == 20);
}
