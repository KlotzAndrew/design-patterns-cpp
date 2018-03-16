// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/factory.cc"

int main() {
  Walker* walker = new DogWalker;

  std::string value = walker->walk();
  assert(value == "woof");
  delete walker;
}
