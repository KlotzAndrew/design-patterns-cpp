// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/decorator.cc"

int main() {
  Title* title = new Title("docorate!");
  std::string value = title->print();
  assert(value == "docorate!");

  Decorator* decorator = new Decorator(title);
  value = decorator->print();
  assert(value == "docorate!");

  decorator = new AsteriskDecorator(title);
  value = decorator->print();
  assert(value == "*docorate!*");

  decorator = new PlusDecorator(new AsteriskDecorator(title));
  value = decorator->print();
  assert(value == "+*docorate!*+");
}
