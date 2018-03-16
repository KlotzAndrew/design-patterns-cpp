// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/abstract_factory.cc"

int main() {
  AbstractFactory *complexFactry = new ComplexFactory;
  AbstractFactory *simpleFactry = new SimpleFactory;

  Shape *simpleShape = simpleFactry->createCurvedInstance();
  std::string name = simpleShape->getValue();
  assert(name == "circle");

  Shape *complexShape = complexFactry->createCurvedInstance();
  name = complexShape->getValue();
  assert(name == "ellipse");
}
