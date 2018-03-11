#include <cassert>

#include "../../src/behavioral/state.cpp"

int main() {
  State *stateA = new ConcreteStateA;
  State *stateB = new ConcreteStateB;

  Context *context = new Context;

  context->setState(stateA);
  assert(context->request() == 10);

  context->setState(stateB);
  assert(context->request() == 100);
}
