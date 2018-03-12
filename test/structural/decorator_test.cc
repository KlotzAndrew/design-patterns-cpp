// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/decorator.cc"

int main() {
  Title* title = new Title("docorate!");
  assert(title->print() == "docorate!");

  Decorator* decorator = new Decorator(title);
  assert(decorator->print() == "docorate!");

  decorator = new AsteriskDecorator(title);
  assert(decorator->print() == "*docorate!*");

  decorator = new PlusDecorator(new AsteriskDecorator(title));
  assert(decorator->print() == "+*docorate!*+");
}
