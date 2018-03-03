#include <cassert>

#include "../../src/structural/decorator.cpp"

int main()
{
  Title* title = new Title("docorate!");
  assert(title->print() == "docorate!");

  Decorator* decorator = new Decorator(title);
  assert(decorator->print() == "docorate!");

  decorator = new AsteriskDecorator(title);
  assert(decorator->print() == "*docorate!*");

  decorator = new PlusDecorator(new AsteriskDecorator(title));
  assert(decorator->print() == "+*docorate!*+");
}
