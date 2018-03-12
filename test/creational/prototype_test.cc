// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/prototype.cc"

int main() {
  Factory* factory = new Factory(new Sheep);
  Sheep* sheep = factory->makeSheep();
  assert(sheep->type() == "Sheep!");

  factory = new Factory(new MagicSheep);
  sheep = factory->makeSheep();
  assert(sheep->type() == "Magic Sheep!");
}
