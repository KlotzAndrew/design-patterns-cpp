#include <cassert>

#include "../../src/behavioral/mediator.cpp"

int main() {
  Mediator* mediator = new ConcreteMediator;

  Colleague* c1 = new ConcreteColleague(mediator);
  Colleague* c2 = new ConcreteColleague(mediator);
  Colleague* c3 = new ConcreteColleague(mediator);

  mediator->add(c1);
  mediator->add(c2);
  mediator->add(c3);

  c1->gossip(10);
  assert(c1->getValue() == 10);
  assert(c2->getValue() == 10);
  assert(c3->getValue() == 10);

  c1->gossip(88);
  assert(c1->getValue() == 88);
  assert(c2->getValue() == 88);
  assert(c3->getValue() == 88);
}
