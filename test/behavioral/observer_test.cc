// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/observer.cc"

int main() {
  ConcreteObserver *o1 = new ConcreteObserver;
  ConcreteObserver *o2 = new ConcreteObserver;

  Subject *subject = new ConcreteSubject;

  subject->attach(o1);
  subject->attach(o2);

  subject->setState(10);
  subject->notfiy();

  int value_o1 = o1->getState();
  int value_o2 = o2->getState();
  assert(value_o1 == 10);
  assert(value_o2 == 10);

  subject->detach(0);

  subject->setState(20);
  subject->notfiy();

  value_o1 = o1->getState();
  value_o2 = o2->getState();
  assert(value_o1 == 10);
  assert(value_o2 == 20);

  delete subject;
}
