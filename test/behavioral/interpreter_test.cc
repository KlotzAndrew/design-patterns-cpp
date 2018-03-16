// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/interpreter.cc"

int main() {
  Context context;

  context.set("CAT", false);
  context.set("DOG", true);

  AbstractExpression *cat = new TerminalExpression("CAT");
  AbstractExpression *dog = new TerminalExpression("DOG");
  AbstractExpression *cat_and_cat = new NonTerminalExpression(cat, cat);
  AbstractExpression *cat_and_dog = new NonTerminalExpression(cat, dog);
  AbstractExpression *dog_and_dog = new NonTerminalExpression(dog, dog);

  bool exper1 = cat_and_cat->interpret(&context);
  bool exper2 = cat_and_dog->interpret(&context);
  bool exper3 = dog_and_dog->interpret(&context);
  assert(exper1 == false);
  assert(exper2 == false);
  assert(exper3 == true);
}
