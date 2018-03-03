#include <cassert>

#include "../../src/creational/factory.cpp"

int main()
{
  Walker* walker = new DogWalker;

  assert(walker->walk() == "woof");
}
