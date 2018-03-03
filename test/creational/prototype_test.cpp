#include <cassert>

#include "../../src/creational/prototype.cpp"

int main()
{
  Factory* factory = new Factory(new Sheep);
  Sheep* sheep = factory->makeSheep();
  assert(sheep->type() == "Sheep!");

  factory = new Factory(new MagicSheep);
  sheep = factory->makeSheep();
  assert(sheep->type() == "Magic Sheep!");
}
