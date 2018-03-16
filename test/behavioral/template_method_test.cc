// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/template_method.cc"

int main() {
  AbstractClass *klass = new ConcreteClass;

  int value = klass->primitiveOperation1();
  assert(value == 10);
  value = klass->primitiveOperation2();
  assert(value == 20);
}
