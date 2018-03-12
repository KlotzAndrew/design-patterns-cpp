// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/factory.cc"

int main() {
  Walker* walker = new DogWalker;

  assert(walker->walk() == "woof");
}
