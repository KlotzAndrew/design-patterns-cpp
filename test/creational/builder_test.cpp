#include <cassert>

#include "../../src/creational/builder.cpp"

int main()
{
  Director* director = new Director(new SimpleBuilder);
  Maze* maze = director->getMaze();
  assert(maze->level == 10);

  director = new Director(new ComplexBuilder);
  maze = director->getMaze();
  assert(maze->level == 100);
}
