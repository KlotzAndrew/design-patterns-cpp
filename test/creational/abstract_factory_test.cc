// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/abstract_factory.cc"

int main() {
  AbstractFactory *complexFactry = new ComplexFactory;
  AbstractFactory *simpleFactry = new SimpleFactory;

  Shape *simpleShape = simpleFactry->createCurvedInstance();
  assert(simpleShape->getValue() == "circle");

  Shape *complexShape = complexFactry->createCurvedInstance();
  assert(complexShape->getValue() == "ellipse");
}
