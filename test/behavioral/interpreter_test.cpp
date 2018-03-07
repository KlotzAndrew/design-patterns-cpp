#include <cassert>

#include "../../src/behavioral/interpreter.cpp"

int main() {
  Context context;

  context.set("CAT", false);
  context.set("DOG", true);

  AbstractExpression *cat = new TerminalExpression("CAT");
  AbstractExpression *dog = new TerminalExpression("DOG");
  AbstractExpression *cat_and_cat = new NonTerminalExpression(cat, cat);
  AbstractExpression *cat_and_dog = new NonTerminalExpression(cat, dog);
  AbstractExpression *dog_and_dog = new NonTerminalExpression(dog, dog);

  assert(cat_and_cat->interpret(&context) == false);
  assert(cat_and_dog->interpret(&context) == false);
  assert(dog_and_dog->interpret(&context) == true);
}
