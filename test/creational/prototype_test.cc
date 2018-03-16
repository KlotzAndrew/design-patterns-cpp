// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/prototype.cc"

int main() {
  Factory* factory = new Factory(new Sheep);
  Sheep* sheep = factory->makeSheep();
  std::string type = sheep->type();
  assert(type == "Sheep!");
  delete sheep;

  factory = new Factory(new MagicSheep);
  sheep = factory->makeSheep();
  type = sheep->type();
  assert(type == "Magic Sheep!");
  delete sheep;
}
