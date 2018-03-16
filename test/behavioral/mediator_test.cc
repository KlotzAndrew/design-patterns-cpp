// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/mediator.cc"

int main() {
  Mediator* mediator = new ConcreteMediator;

  Colleague* c1 = new ConcreteColleague(mediator);
  Colleague* c2 = new ConcreteColleague(mediator);
  Colleague* c3 = new ConcreteColleague(mediator);

  mediator->add(c1);
  mediator->add(c2);
  mediator->add(c3);

  c1->gossip(10);
  int value_c1 = c1->getValue();
  int value_c2 = c2->getValue();
  int value_c3 = c3->getValue();
  assert(value_c1 == 10);
  assert(value_c2 == 10);
  assert(value_c3 == 10);

  c1->gossip(88);
  value_c1 = c1->getValue();
  value_c2 = c2->getValue();
  value_c3 = c3->getValue();
  assert(value_c1 == 88);
  assert(value_c2 == 88);
  assert(value_c3 == 88);
}
