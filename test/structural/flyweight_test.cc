// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/flyweight.cc"

int main() {
  BoxFactory* boxFactory = new BoxFactory();
  Box* redBox = boxFactory->getBox("red");
  boxFactory->getBox("red");
  assert(redBox->getColor() == "red");

  assert(boxFactory->boxCount() == 1);

  boxFactory->getBox("green");
  boxFactory->getBox("green");

  assert(boxFactory->boxCount() == 2);
}
