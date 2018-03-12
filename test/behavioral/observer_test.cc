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

  assert(o1->getState() == 10);
  assert(o2->getState() == 10);

  subject->detach(0);

  subject->setState(20);
  subject->notfiy();

  assert(o1->getState() == 10);
  assert(o2->getState() == 20);
}
