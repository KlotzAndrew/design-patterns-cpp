// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/flyweight.cc"

int main() {
  BoxFactory* boxFactory = new BoxFactory();
  Box* redBox = boxFactory->getBox("red");
  boxFactory->getBox("red");

  std::string color = redBox->getColor();
  assert(color == "red");

  int boxcount = boxFactory->boxCount();
  assert(boxcount == 1);

  boxFactory->getBox("green");
  boxFactory->getBox("green");

  boxcount = boxFactory->boxCount();
  assert(boxcount == 2);
}
